#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        map<long long,long long>freq;
        for(long long i=0;i<n;i++) {
            long long x;cin>>x;
            freq[x]++;
        }
        long long ans=0;
        for(auto p:freq){
                ans+=p.second*(p.second-1)/2;
        }
        ans+=freq[1]*freq[2];
        cout<<ans<<'\n';  
}
}