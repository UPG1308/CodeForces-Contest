#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int mx = 0;
    for(int i = 0; i < n; i+=2) mx = max(mx, arr[i]);
    cout<<mx<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}