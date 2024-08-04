#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    vector<int> state(n, 0);
    state[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        int ind = arr[n - 1] - arr[i] - 1;
        if((ind) % k == 0){ state[i] = 

        }
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}