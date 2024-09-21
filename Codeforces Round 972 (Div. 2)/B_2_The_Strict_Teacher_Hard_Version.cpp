#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, q; cin>>n>>m>>q;
    vector<int> positions(m);
    for(int i = 0; i < m; ++i) cin>>positions[i];
    sort(positions.begin(), positions.end());
    while(q--){
        int pos; cin>>pos;
        auto lb = lower_bound(positions.begin(), positions.end(), pos) - positions.begin();
        if(lb == m) cout<<(n - positions[m - 1])<<"\n";
        else if(lb == 0) cout<<(positions[0] - 1)<<"\n";
        else{
            cout<<(positions[lb] - positions[lb - 1])/2<<"\n";
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}