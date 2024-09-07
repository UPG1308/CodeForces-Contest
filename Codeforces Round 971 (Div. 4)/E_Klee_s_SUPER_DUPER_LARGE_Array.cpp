#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n){
    return n * 1ll * (n + 1)/2;
}

void solve(){
    ll n, k; cin>>n>>k;
    ll total = sum(k + n - 1) - sum(k - 1);
    ll left = k, right = n + k - 1;
    while(left <= right){
        ll mid = left + (right - left)/2;
        ll leftSum = sum(mid) - sum(k - 1);
        ll rightSum = total - leftSum;
        if(leftSum == rightSum) {cout<<"0\n"; return;}
        if(leftSum > rightSum) right = mid - 1;
        else left = mid + 1;
    }
    cout << min(abs(2 * (sum(right) - sum(k - 1)) - total), abs(2 * (sum(left) - sum(k - 1)) - total)) << "\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}