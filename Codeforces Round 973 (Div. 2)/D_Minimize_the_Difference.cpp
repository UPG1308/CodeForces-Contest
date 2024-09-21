#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isMax(ll mx, vector<ll>& arr){
    ll extra = 0;
    for(ll i: arr){
        if(i >= mx) extra += i - mx;
        else extra = max(0ll, extra - (mx - i));
    }
    return extra == 0;
}

ll findMax(vector<ll>& arr){
    ll low = 1, high = *max_element(arr.begin(), arr.end()), ans = 0;
    while(low <= high){
        ll mid = low + (high - low)/2;
        if(isMax(mid, arr)){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

bool isMin(ll mn, vector<ll>& arr){
    ll extra = 0ll;
    for(ll i: arr){
        if(i > mn) extra += i - mn;
        else {
            extra -= (mn - i);
            if(extra < 0) return false;
        }
    }
    return true;
}
ll findMin(vector<ll>& arr){
    ll low = 1, high = *max_element(arr.begin(), arr.end()), ans = 0;
    while(low <= high){
        ll mid = low + (high - low)/2;
        if(isMin(mid, arr)){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

void solve(){   
    ll n; cin>>n;
    vector<ll> arr(n);
    for(ll &i: arr) cin>>i;
    ll maxval = findMax(arr);
    ll minval = findMin(arr);
    cout<<maxval - minval<<"\n";
}

int main(){
    int t;cin>>t;
    while(t--) solve();
    return 0;
}