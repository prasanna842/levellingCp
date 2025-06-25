#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
long long lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> k(n);
        for(int i=0;i<n;i++) cin>>k[i];
        long long p=k[0];
        for(int i=0;i<n-1;i+=1){
            p=lcm(p,k[i+1]);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=p/k[i];
        }
        if(ans<p){
        for(int i=0;i<n;i++){
            cout<<p/k[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<"-1\n";
    }
}
}