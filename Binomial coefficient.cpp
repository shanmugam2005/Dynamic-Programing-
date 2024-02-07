#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   int ans[n+1][k+1];
   for(int i=0;i<=n;i++){
   for(int j=0;j<=min(i,k);j++){
       if(j==0 || j==i){
        ans[i][j]=1;
       }
       else{
        ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
       }
   }

   }
   cout<<ans[n][k];

}
