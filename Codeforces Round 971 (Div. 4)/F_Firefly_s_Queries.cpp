#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n, q; cin >> n >> q;
 
        vector<int>arr(n);
        for(auto &i : arr) cin >> i;
 
        vector<int>prefix(n + 1);
 
        for(int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + arr[i - 1];
        }
 
        auto calcPre = [&](int shift, int index) -> int {
            pair<int,int>range = {(shift) % n, (index + shift) % n};
            range.first++, range.second++;
 
            if(range.first <= range.second) {
                return prefix[range.second] - prefix[range.first - 1];
            }
            
            return prefix[range.second] + (prefix[n] - prefix[range.first - 1]);
        };
 
        auto calcSuff = [&](int shift, int index) -> int {
            pair<int,int>range = {(index + shift) % n, (n - 1 + shift) % n};
            range.first++, range.second++;
 
            if(range.first <= range.second) {
                return prefix[range.second] - prefix[range.first - 1];
            }
            
            return prefix[range.second] + (prefix[n] - prefix[range.first - 1]);
        };
 
        auto calcRange = [&](int shift, int left, int right) -> int {
            pair<int,int>range = {(left + shift) % n, (right + shift) % n};
            range.first++, range.second++;
 
            if(range.first <= range.second) {
                return prefix[range.second] - prefix[range.first - 1];
            }
            
            return prefix[range.second] + (prefix[n] - prefix[range.first - 1]);
        };
 
        for(int i = 0; i < q; i++) {
            int l, r; cin >> l >> r; 
            int firstArr = (l - 1) / n, lastArr = (r - 1) / n;
            if(firstArr == lastArr) cout << calcRange(firstArr, l - 1, r - 1) << "\n";
            else cout << (lastArr - firstArr - 1) * prefix[n] + calcSuff(firstArr, l - 1) + calcPre(lastArr, r - 1) << "\n";
        }
}

signed main(){
    int t;  cin>>t;
    while(t--) solve();
    return 0;
}