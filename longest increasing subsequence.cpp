#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    int ans[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    ans[0]=1;
    for(int i=1;i<a;i++){
            ans[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && ans[i]<(ans[j]+1)){
                ans[i]=ans[j]+1;
            }
        }
    }
    cout<<"Longest Increasing Sequence is"<<" "<<*max_element(ans,ans+a);
}
