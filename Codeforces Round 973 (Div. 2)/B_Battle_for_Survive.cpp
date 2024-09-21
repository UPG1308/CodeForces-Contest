#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int &i: arr) cin>>i;
    long long sum = accumulate(arr.begin(), arr.end(), 0ll);
    if(n == 1) cout<<arr[0]<<"\n";
    else if(n == 2) cout<<arr[1] - arr[0]<<"\n";
    else cout<<sum - 2 * arr[n - 2]<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}