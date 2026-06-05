// LeetCode Problem 3753_Total_Waviness_of_Numbers_in_Range_II
// Status: Accepted
// Language: C++

class Solution {
    using ll = long long;
    pair<ll, ll> m[16][2][2][11][11];
    string s;

    pair<ll, ll> f(int i, int t, int z, int p, int pp) {
        if (i == s.size()) return {1, 0};
        if (m[i][t][z][p][pp].first != -1) return m[i][t][z][p][pp];
        
        ll c = 0, w = 0;
        for (int d = 0, L = t ? s[i] - 48 : 9; d <= L; ++d) {
            int nz = z && !d, np = nz ? 10 : d, npp = nz ? 10 : p;
            auto [nc, nw] = f(i + 1, t && d == L, nz, np, npp);
            c += nc; 
            w += nw + (p < 10 && pp < 10 && (p - pp) * (p - d) > 0 ? nc : 0);
        }
        return m[i][t][z][p][pp] = {c, w};
    }

    ll g(ll n) {
        if (n < 0) return 0;
        s = to_string(n);
        memset(m, -1, sizeof(m));
        return f(0, 1, 1, 10, 10).second;
    }

public:
    ll totalWaviness(ll a, ll b) { 
        return g(b) - g(a - 1); 
    }
};
