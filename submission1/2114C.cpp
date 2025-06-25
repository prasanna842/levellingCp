#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
        while(t--){
        int count=1;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        auto arrs = unique(arr.begin(),arr.end());
        arr.resize(distance(arr.begin(),arrs));
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]+1<arr[i]){
                count++;
            }else if(i<n-1 && arr[i-1]+1<arr[i+1]){
                arr.erase(arr.begin()+i);
                count++;
            }
        }
        cout<<count<<endl;
    }
}