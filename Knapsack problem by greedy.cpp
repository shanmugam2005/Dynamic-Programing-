#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,ca;
    cin>>a;
    int p[a],wt[a];
    vector<pair<double,int>>pwt;
    for(int i=0;i<a;i++){
        cin>>p[i];
    }
    for(int i=0;i<a;i++){
        cin>>wt[i];
    }
    cin>>ca;
    for(int i=0;i<a;i++){
        double m=double(p[i])/double(wt[i]);
        pwt.push_back({m,i});
    }
    sort(pwt.begin(),pwt.end(),greater<pair<double,int>>());
    int cur=0;
    double ans=0.0;
    for(int i=0;i<a;i++){
        if(cur+wt[pwt[i].second]<ca){
            ans+=(p[pwt[i].second]);
            cur+=(wt[pwt[i].second]);
        }
        else{
            double x=(ca-cur);
            ans+=(x*pwt[i].first);
            cout<<pwt[i].first;
        }
    }
    cout<<ans;
}
