#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin>>a;
   int b[a+1];
   for(int i=0;i<=a;i++){
      if(i<=1){
        b[i]=i;
      }
      else{
        b[i]=b[i-1]+b[i-2];
      }
   }
   cout<<b[a];
}
