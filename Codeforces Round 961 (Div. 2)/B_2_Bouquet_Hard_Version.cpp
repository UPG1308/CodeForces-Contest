/**
 *    author:  tourist
 *    created: 23.07.2024 10:37:36
 **/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        int64_t m;
        cin >> n >> m;
        map<int64_t, int64_t> mp;
        vector<int64_t> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int64_t> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            mp[a[i]] += c[i];
        }
        int64_t ans = 0;
        for (auto &[k, v0] : mp)
        {
            auto it = mp.find(k + 1);
            auto v1 = (it != mp.end() ? it->second : 0);
            // v0 flowers with k petals
            // v1 flowers with k + 1 petals
            auto x = min(v0, m / k);
            auto y = min(v1, (m - x * k) / (k + 1));
            auto add = min({x, v1 - y, (m - x * k) % (k + 1)});
            ans = max(ans, x * k + y * (k + 1) + add);
        }
        cout << ans << '\n';
    }
    return 0;
}
