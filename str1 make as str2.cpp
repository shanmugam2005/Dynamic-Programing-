#include<iostream>
using namespace std;
int ans(string a,string b){
    int m[a.size()+1][b.size()+1];
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){
            if(i==0){
                m[i][j]=j;
            }
            else if(j==0){
                m[i][j]=i;
            }
            else if(a[i-1]==b[i-1]){
                m[i][j]=m[i-1][j-1];
            }
            else{
                m[i][j]=min(min(m[i-1][j],m[i][j-1]),m[i-1][j-1])+1;
            }
        }
    }
    //cout<<m[a.size()][b.size()];
    return m[a.size()][b.size()];
}
int main(){
string st,st2;
cin>>st>>st2;
cout<<ans(st,st2);
}
