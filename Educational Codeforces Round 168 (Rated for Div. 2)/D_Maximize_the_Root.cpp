#include <bits/stdc++.h>
using namespace std;

int dfs(int node, int parent, vector<int> adj[], vector<int>& values){

    int mn = 1e9;
    for(int adjNode: adj[node]){
        if(adjNode == parent) continue;
        mn = min(mn, dfs(adjNode, node, adj, values));
    }
    if(node == 0) return mn + values[0];
    if(mn == 1e9) return values[node];
    if(values[node] >= mn) return mn;
    return (mn + values[node])/2;
}

void solve(){
    int n; cin>>n;
    vector<int> values(n, 0);
    for(int i = 0; i < n; i++) cin>>values[i];
    vector<int> adj[n];
    for(int i = 2; i <= n; i++){
        int par; cin>> par;
        par--;
        adj[par].push_back(i - 1);
    }
    int val = dfs(0, -1, adj, values);
    cout<<val<<"\n";

}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}