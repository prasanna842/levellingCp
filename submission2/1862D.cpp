#include<bits/stdc++.h>
using namespace std;
long long nCr(long long n) {
    return n*(n-1)/2;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long p=n;
        long long q=2;
        while(nCr(q)<p){
            q*=2;
        }
        long long m=q/2,r=q,ans=q;
        while(m<=r){
            long long mid=m+(r-m)/2;
            if(nCr(mid)>=p){
                ans=mid;
                r=mid-1;
            }else {
                m=mid+1;
            }
        }
    if(nCr(ans)==p) cout<<ans<<endl;else{
    long long used=nCr(ans-1);
    long long result=ans-1+(p-used);
    cout<<result<<endl;
}
}
}