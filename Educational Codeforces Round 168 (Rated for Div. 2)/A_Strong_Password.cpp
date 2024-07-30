#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin>>s;
    int n = s.size();
    char ch;
    
    
    int i = 0;
    bool found = false;
    for(i = 1; i < n; i++){
        if(s[i - 1] == s[i]) {found = true; break;}
    }
    if(found){
        if(s[i] == 'z') ch = 'a';
            else ch = s[i] + 1;
        s.insert(s.begin() + i, ch);
    }
    else{
        if (s[n - 1] == 'z')
            ch = 'a';
        else
            ch = s[n - 1] + 1;
        s.push_back(ch);
    }
    cout<<s<<"\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}