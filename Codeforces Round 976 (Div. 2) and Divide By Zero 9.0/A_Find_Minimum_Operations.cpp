#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k; cin>>n>>k;
    ll ans = 0;
    if(k == 1) {
        cout<<n<<"\n";
        return;
    }
    while(n >= k){
        ans += n%k;
        n /= k;
    }
    ans += n%k;
    cout<<ans<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}