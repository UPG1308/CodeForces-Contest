#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    int count = 0, gold = 0;
    for(int i = 0; i < n; ++i){
        int a; cin>>a;
        if(a >= k) gold += a;
        else if(a == 0 and gold) gold--, count++;
    }
    cout<<count<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}