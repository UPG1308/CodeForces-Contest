#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> brr(n + 2, 0);
    for(int i = 1; i < n; i++) cin>>brr[i];
    vector<int> arr(n + 2, 0);
    
    for(int i = 1; i <= n; i++) arr[i] = brr[i - 1] | brr[i];
    for(int i = 1; i < n; i++){
        if((arr[i] & arr[i + 1]) != brr[i]){
            cout<<"-1\n";return;
        }
    }
    for(int i = 1; i <= n; i++) cout<<arr[i]<<" ";
    cout<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}