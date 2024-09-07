#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, k; cin>>a>>b>>k;
    int x = ceil(a * 1.0 / k), y = ceil(b * 1.0 / k);
    if(y > x) cout<<(2 * y)<<"\n";
    else if(x == y) cout<<(x + y)<<"\n";
    else cout<<(2 * x - 1)<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}