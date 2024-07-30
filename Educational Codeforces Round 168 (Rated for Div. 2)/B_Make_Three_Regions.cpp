#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<string> arr(2);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int count = 0;
    for(int i = 1; i < n - 1; i++) count += (arr[0][i - 1] == '.' and arr[0][i + 1] == '.' and arr[1][i - 1] == 'x' and arr[1][i] == '.' and arr[1][i + 1] == 'x')?1:0;
    for(int i = 1; i < n - 1; i++) count += (arr[1][i - 1] == '.' and arr[1][i + 1] == '.' and arr[0][i - 1] == 'x' and arr[0][i] == '.' and arr[0][i + 1] == 'x')?1:0;
    cout<<count<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}