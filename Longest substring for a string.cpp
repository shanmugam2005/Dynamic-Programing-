#include<bits/stdc++.h>
using namespace std;
int main(){
   string a;
   cin>>a;
   int b[a.size()+1],w=0,p=1,o;
   for(int i=0;i<=a.size();i++){
      b[i]=0;
    if(isupper(a[i])|| i==a.size()){
            b[i]=1;
            w=1;
            if(i!=0 && p<b[i-1]){
                p=b[i-1];
                o=i;
            }

    }
    else{
        if(w){

        b[i]=b[i-1]+1;

        }
    }

    }
    if(p==1){
        cout<<"-1";
    }
    else{
        cout<<a.substr(o-p,p);
    }

}
