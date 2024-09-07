#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> perm(n + 1, 0);
    for(int i = 1; i <= n; ++i) cin>>perm[i];
    string color; cin>>color;
    vector<int> ans(n + 1, -1), vis(n + 1, 0);

    for(int i = 1; i <= n; ++i){
        if(ans[i] != -1) continue;
        int black = 0;
        int ind = i;
        while(!vis[ind]){
            vis[ind] = 1;
            black += (color[ind - 1] == '0');
            ind = perm[ind];
        }
        ind = i;
        while(ans[ind] == -1){
            ans[ind] = black;
            ind = perm[ind];
        }
    }
    
    for(int i = 1; i <= n; ++i) cout<<ans[i]<<" ";
    cout<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}