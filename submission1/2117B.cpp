#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr,ans(n);
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        if(n%2==0){
            for(int i=0,j=0;i<n,j<n/2;i++,j++){
                ans[j]=arr[i];
                ans[n-j-1]=arr[i+1];
                i++;
            }
        }else{
            for(int i=0,j=0;i<n-1,j<n/2;i++,j++){
                ans[j]=arr[i];
                ans[n-j-1]=arr[i+1];
                i++;
            }
            ans[(n-1)/2]=arr[n-1];
    }
    for(int x:ans) cout<<x<<" ";
        cout<<endl;
}
}