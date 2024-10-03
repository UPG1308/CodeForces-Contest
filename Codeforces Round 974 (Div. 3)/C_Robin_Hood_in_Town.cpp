#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int &i: arr) cin>>i;
    ll sum = accumulate(arr.begin(), arr.end(), 0ll);
    if(n <= 2) {
        cout<<"-1\n"; return;
    }
    sort(arr.begin(), arr.end());
    cout<<max(0ll, (arr[n/2] * 2 * 1ll * n - sum + 1))<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}