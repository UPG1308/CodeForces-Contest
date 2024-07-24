#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll min(ll a, ll b){
    if(a < b) return a;
    return b;
}

void solve(){
    ll n, m; cin >>n>>m;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        ll a; cin>>a;
        mp[a]++;
    }
    // mp[0] = 0;
    ll prev = 0;
    ll totalPetals = 0;
    ll i = 0;
    for(auto [k, v]: mp){
        if((k - prev) <= 1 and i){
            ll k1 = 0, k2 = 0;
            k1 = min(mp[prev], m/prev);
            k2 = min(v, (m - (k1 * mp[prev])) / k);
            ll r = min({k1, v - k2, m - (k1 * prev + k2 * v)});
            ll finalval = (k1 - r) * prev + (k2 + r) * k;
            totalPetals = max(totalPetals, finalval);
        }
        else{
            ll cost = min(v, m / k);
            totalPetals = max(totalPetals, cost * k);
        }
        prev = k;
        i++;
    }
    cout<<totalPetals<<"\n";
}

int main(){
    int t; cin>> t;
    while(t--) solve();
    return 0;
}