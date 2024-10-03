#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    public: 
    vector<int> size, parent;
    int components;
    DisjointSet(int n){
        for(int i = 0; i <= n; ++i){
            parent.push_back(i);
            size.push_back(1);
        }
        components = n;
    }

    int findPar(int u){
        if(parent[u] == u) return u;
        return parent[u] = findPar(parent[u]);
    }

    void connect(int node1, int node2){
        int u = findPar(node1);
        int v = findPar(node2);
        
        if(u == v) return;
        if(size[u] <= size[v]){
            size[v] += size[u];
            parent[u] = v;
        }
        else {
            size[u] += size[v];
            parent[v] = u;
        }
        components--;
    }
};

void solve(){
    int n, m; cin>>n>>m;
    vector<vector<int>> dp(n + 1, vector<int>(11, 0));

    while(m--){
        int a, d, k; cin>>a>>d>>k;
        dp[a][d] = max(dp[a][d], k);
    }

    DisjointSet ds(n);

    for(int i = 1; i <= n; ++i){
        for(int d = 1; d <= 10; ++d){
            int iterations = dp[i][d], position = i;
            while(iterations > 0 && position + d <= n){
                iterations--;
                ds.connect(position, position + d);
                dp[position][d] = 0; position += d;
                iterations = max(dp[position][d], iterations);
            }
        }
    }

    cout<<ds.components<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}