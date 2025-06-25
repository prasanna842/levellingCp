#include<bits/stdc++.h>
using namespace std;
long long nCr(int n, int r) {
    if (r > n - r) r = n - r;
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int main(){
    string st;
    string sf;
    cin>>st>>sf;
    int n=st.length();
    int result=0;
    for(int i=0;i<n;i++){
        if (st[i]=='+'){
            result++;
        }else{
            result--;
        }
    }
    int d=0;
    int fk=0;
    for(int i=0;i<n;i++){
        if(sf[i]=='?') d++;
        else if(sf[i]=='+') fk++;
        else fk--;
    }
    if(d==0 && result==fk){ cout<<fixed<<setprecision(10)<<double(1)<<endl;
     return 0;}
    int m=(1LL<<d);
    double count=0;
    int p=d;
    int q=0;
    int l=m;
    vector<string> pos;
    for(int i=0;i<m/2+1;i++){
        int tri=fk+p*(1)+q*(-1);
        if(tri==result){
            count+=nCr(p+q,p);
        }
        p--;q++;
    }
    cout<<fixed<<setprecision(10)<<(double)(count/m)<<endl;
}