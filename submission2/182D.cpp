#include<bits/stdc++.h>
using namespace std;
bool isDivisor(string s,string p){
    int n=p.size();
    if(s.length()%n!=0) return false;
    for(int i=0;i<s.size();i+=n){
        if(s.substr(i,n)!=p) return false;
    }
    return true;
    }
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    int count=0;
    for(int i=1;i<=min(n1,n2);i++){
            string pat=s1.substr(0,i);
            if(isDivisor(s1,pat)&&isDivisor(s2,pat)) count++;
    }
    cout<<count<<endl;
}