#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<string> arr(n);
    for(int i = 0; i < n; i++)cin>>arr[i];
    for(int i = 0; i < n; i += k){
        for(int j = 0; j < n; j += k) cout<<arr[i][j];
        cout<<"\n";
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}