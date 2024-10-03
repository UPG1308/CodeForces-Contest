#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll countPerfectSquares(ll num){
    ll low = 1, high = num, ans = 0;
    while(low <= high){
        ll mid = low + (high - low)/2;
        if(mid * mid <= num){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

void solve(){
    ll k; cin>>k;
    ll low = 1, high = 2e18, ans = 1;
    while(low <= high){
        ll mid = low + (high - low)/2;
        ll perfectSquares = int(sqrtl(mid));
        if(mid - perfectSquares >= k){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    cout<<ans<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}