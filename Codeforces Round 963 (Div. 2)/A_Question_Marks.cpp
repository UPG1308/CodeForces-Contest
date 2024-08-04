#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    vector<int> ans(4, 0);
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '?') ans[s[i] - 'A']++;
    }
    int corr = 0;
    for(int i = 0; i < 4; i++) corr += min(n, ans[i]);
    cout<<corr<<"\n";

}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}