#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k; cin>>n>>k;
    ll last = max(0ll, n - k);
    ll leaves = (n * (n + 1)/2) - (last * (last + 1))/ 2;
    // cout<<leaves<<"\n";
    cout<<(!(leaves & 1)?"YES":"NO")<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}