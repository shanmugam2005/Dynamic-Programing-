#include<bits/stdc++.h>
using namespace std;
int main(){
    string n1,n2;
    cin>>n1>>n2;
    int m[n1.size()+1][n2.size()+1];
    for(int i=0;i<=n1.size();i++){
        for(int j=0;j<=n2.size();j++){
                if(i==0 || j==0){
                    m[i][j]=0;
                }
            else if(n1[i-1]==n2[j-1]){
                m[i][j]=m[i-1][j-1]+1;
            }
            else{
                m[i][j]=max(m[i-1][j],m[i][j-1]);
            }
        }
    }
    cout<<m[n1.size()][n2.size()];
}
