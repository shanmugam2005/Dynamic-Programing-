
 #include<bits/stdc++.h>
 using namespace std;
 int knapsack(int Cap,int wts[],int ps[],int n){
    int m[n+1][Cap+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<Cap+1;j++){
            if(i==0 || j==0){
                m[i][j]=0;
            }
            else if(wts[i-1]<=j){
                m[i][j]=max(m[i-1][j],ps[i-1]+m[i-1][j-wts[i-1]]);
            }
            else{
                    m[i][j]=m[i-1][j];
            }
        }
    }
    return m[n][Cap];

 }
 int main(){
    int a,ca;
    cin>>a;
    int p[a],wt[a];
    for(int i=0;i<a;i++){
        cin>>p[i];
    }
    for(int i=0;i<a;i++){
        cin>>wt[i];
    }
    cin>>ca;
    cout<<knapsack(ca,wt,p,a);


 }
