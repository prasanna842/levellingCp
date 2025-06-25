#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        vector<long long>centers(n);
        vector<long long> radii(n);
        for(int i=0;i<2*n;i++){
            if(i<n){
                cin>>centers[i];
            }else{
                cin>>radii[i-n];
            }
        }
        long long count=0;
        map<int,int> uniq;
        for(long long i=0;i<n;i++){
           int xi=centers[i],ri=radii[i];
            for(int x=xi-ri;x<=xi+ri;x++){
                long long dx=(long long)x-xi;
                long long sqy=(long long)ri*ri-dx*dx;
                if(sqy<0) continue;
                int y=floor(sqrtl(sqy));
                uniq[x]=max(uniq[x],y);
            }
        }
        for(auto p:uniq){
            count+=(2*p.second+1);
        }
        cout<<count<<endl;
    }
}