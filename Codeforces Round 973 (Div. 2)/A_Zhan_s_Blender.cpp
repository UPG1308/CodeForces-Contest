#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y; cin>>n>>x>>y;
    if(y <= x) cout<<(n + y - 1)/y<<"\n";
    else cout<<(n + x - 1)/x<<"\n";
}

int main(){
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}