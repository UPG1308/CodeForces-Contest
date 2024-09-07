#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin>>a>>b;
    int val = 1e8;
    for(int c = a; c <= b; c++) val = min(val, (b - c) + (c - a));
    cout<<val<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}