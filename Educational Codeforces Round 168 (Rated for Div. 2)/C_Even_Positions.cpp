#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int open = 0, close = 0;
    for(int i = 1; i < n; i+=2){
        if(s[i] == ')') close++;
        else if(s[i] == '(') open++;
    }
    int currOpen = 0, currClose = 0;
    for(int i = 0; i < n; i++){
        if(!(i & 1)) {
            if(currClose < currOpen) {
                s[i] = ')';
            }
            else s[i] = '(';
        }
        if(s[i] == '(') currOpen++;
        else if(s[i] == ')') currClose++;
    }
    stack<int> st;
    int count = 0; 
    for(int i = 0; i < n; i++){
        if(s[i] == ')'){
            count += (i - st.top() + 1);
            st.pop();
        }
        else st.push(i);
    }
    cout<<count<<"\n";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}