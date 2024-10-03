#include <bits/stdc++.h>
using namespace std;
#define int long long
int dfs(int node, int taken, int parent, vector<vector<int>>& adj, vector<int>& gold, int n, vector<vector<int>>& dp, int cost){
    if(dp[node][taken] != -1) return dp[node][taken];
    int ans = 0;
    if(taken) ans += gold[node];
    for(int adjNode: adj[node]){
        if(adjNode == parent) continue;
        if(taken) ans += max(dfs(adjNode, 1, node, adj, gold, n, dp, cost) - 2 * cost, dfs(adjNode, 0, node, adj, gold, n, dp, cost));
        else ans += max(dfs(adjNode, 1, node, adj, gold, n, dp, cost), dfs(adjNode, 0, node, adj, gold, n, dp , cost));
    }
    return dp[node][taken] = ans;
}

void solve(){
    int n, c; cin>>n>>c;
    vector<vector<int>> adj(n + 1);
    vector<int> gold(n + 1, 0);
    for(int i = 1; i <= n; ++i) cin>>gold[i];
    for(int i = 0; i < n - 1; ++i){
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    int ans = max(dfs(1, 0, -1, adj, gold, n, dp, c), dfs(1, 1, -1, adj, gold, n, dp, c));
    cout<<ans<<"\n";
}

signed main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}