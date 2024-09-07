#include <bits/stdc++.h>
using namespace std;

long long sumN(int m){
    return  1ll * m * (m + 1)/2;
}
bool isValid(int m, int x){
    return sumN(m - 1) <= x;
}
void solve(){
    int l, r; cin>>l>>r;
    int x = r - l;

    int s = 1, e = 1e9, res = 1;
    while(s <= e){
        int m = s + (e - s)/2;
        if(isValid(m, x)){
            res = m;
            s = m + 1;
        }
        else e = m - 1;
    }
    cout<<res<<"\n";
}
int main(){
    int t; cin>>t; 
    while(t--) solve();
    return 0;
}