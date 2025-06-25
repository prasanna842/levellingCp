#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int q=k;
        vector<int> ans;
        if(k<n){
            while(q--){
                ans.push_back(1);
            }
            ans.push_back(0);
            int m=n-k-1;
            ans.insert(ans.begin()+1,m,0);
        }
        else {
                while(q--){
                ans.push_back(1);
            }
        }
        for(int x:ans){
            cout<<x;
        }
        cout<<endl;
    }
}