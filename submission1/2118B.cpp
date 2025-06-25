#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2*n-3<<endl;
        int m=n;
        int i=2;
        int l=1;
        int r=2;
        while(m>1){
            cout<<i<<" "<<l<<" "<<r<<endl;
            i++;r++;m--;
        }
        int q=n;
        int i_1=1;
        int l_1=2;
        int r_1=n;
        while(q>2){
            cout<<i_1<<" "<<l_1<<" "<<r_1<<endl;
            i_1++;l_1++;q--;
           }
    }
}