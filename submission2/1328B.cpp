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
   int t;cin>>t;
   while(t--){
    int n,k;cin>>n>>k;
    string s(n,'a');
    if(k==1){
        s[n-1]='b';
        s[n-2]='b';
        cout<<s<<endl;
        continue;
    }
    int val=k;
    int i=1;
    while(val>0){
        val-=i;
        i++;
    }
    s[n-i]='b';
    s[n-i+1-val]='b';
    cout<<s<<endl;
}
}