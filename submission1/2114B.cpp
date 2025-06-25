#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int n,k,c;
    string s;
    while(t--){
        cin>>n>>k;
        cin>>s;
        c=(n-2*k)/2;
        int z=count(s.begin(),s.end(),'0');
        int o= n-z;
        if( z>=c && o>=c && (z-c)%2==0 && (o-c)%2==0 ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}