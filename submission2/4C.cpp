#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    unordered_map<string,int> in;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if (in[s]==0){
            cout<<"OK"<<endl;
        }else{
            cout<<s<<in[s]<<endl;
        }
        in[s]++;
}
}