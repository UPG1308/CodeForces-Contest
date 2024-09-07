#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if((sqrt(n) * sqrt(n)) != n){ cout<<"No\n"; return;}
    int zero = 0;
    for(char c: s){
        if(c == '0') zero++;
        if(zero and (c == '1')) break;
    }
    int row = zero + 2;
    int col = n / row;
    if(row == col) cout<<"Yes\n";
    else cout<<"No\n";
     
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}