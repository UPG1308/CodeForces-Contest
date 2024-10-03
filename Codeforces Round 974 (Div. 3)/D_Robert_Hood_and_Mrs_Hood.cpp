#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, d, k; cin>>n>>d>>k;
    vector<pair<int,int>> days(k);
    for(int i = 0; i < k; ++i) cin>>days[i].first>>days[i].second;
    sort(days.begin(), days.end());
    priority_queue<int, vector<int>, greater<int>> q;

    int broVisitDay = 1, momVisitDay = 1, maxJobs = 0, minJobs = k;
    for(int i = 1, j = 0; i <= n - d  + 1; ++i){

        while(j < k and days[j].first <= i + d - 1){
            q.push(days[j].second);
            j++;
        }
        while(!q.empty() and q.top() < i) q.pop();
        int currJobs = q.size();
        if(currJobs > maxJobs){
            maxJobs = currJobs;
            broVisitDay = i;
        }
        if(currJobs < minJobs){
            minJobs = currJobs;
            momVisitDay = i;
            
        }
    }
    cout<<broVisitDay<<" "<<momVisitDay<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}