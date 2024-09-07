#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin>>n;
    unordered_set<int> y1, y2;
    for(int i = 0; i < n; ++i){
        int x, y; cin>>x>>y;
        if(y == 0) y1.insert(x);
        else y2.insert(x);
    }
    ll ans = 0, common = 0;
    for(int x: y1){
        if(y2.find(x) != y2.end()) common++;
        if(y2.find(x - 1) != y2.end() and y2.find(x + 1) != y2.end()) ans++;
    }
    for(int x: y2){
        if(y1.find(x - 1) != y1.end() and y1.find(x + 1) != y2.end()) ans++;
    }
    ans += common * (n - 2);
    cout<<ans<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}