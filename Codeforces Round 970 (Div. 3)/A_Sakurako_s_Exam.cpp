#include <bits/stdc++.h>
using namespace std;

void solve(){
    int ones, twos; cin>>ones>>twos;
    long long total = ones + 2 * twos;
    if((total & 1) or ((total/2) & 1) and ones < 2) cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    int t; cin>>t; 
    while(t--) solve();
    return 0;
}