#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x,p;cin>>n>>x;
        p=n;
        vector<int> arr;
        vector<int> onei;
        int ones=0;
        bool found=false;
        for(int p=0;p<n;p++){
            int q;cin>>q;
            if(q==1){
                ones++;
                onei.push_back(p);
            }
            arr.push_back(q);
        }
        int m=onei.size();
        for(int p=0;p<n;p++){
            if(arr[p]==0) continue;
            else {
                if(x>=(onei[m-1]-p+1)) {
                    found=true;
                    break;
            }
            break;
            }
        }
        if(!found){
        cout<<"NO\n";
        }else cout<<"YES"<<endl;
    }
}