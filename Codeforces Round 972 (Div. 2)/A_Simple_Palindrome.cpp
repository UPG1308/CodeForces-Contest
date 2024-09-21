#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;
    string s = "aeiou";
    string ans = "";
    for(int i = 0; i < n; ++i){
        ans += s[i%5];
    }
    sort(ans.begin(), ans.end());
    cout<<ans<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}