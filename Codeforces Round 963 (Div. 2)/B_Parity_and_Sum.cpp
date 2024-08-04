#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int oddmax = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] & 1) oddmax = max(oddmax, arr[i]);
    }
    sort(arr.begin(), arr.end());
    if(oddmax == -1) {cout<<"0\n"; return;}
    long long large = oddmax;
    long long ope = 0;
    int extra = 0;
    for(int i = 0; i < n; i++){
        if(!(arr[i] & 1)){
            ope++;
            if(arr[i] > large) extra = 1;
            large = max(large * 1ll, (large + arr[i]) * 1ll);
        }
    }
    cout<<(ope + extra)<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}