#include<bits/stdc++.h>
using namespace std;
vector<int> prime(int n){
    vector<bool> isPrime(n+1,true);
    vector<int> primes;
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(int j=2*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    return primes;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long count=0;
        vector<int> primes=prime(n);
        for(int i=1;i<=n;i++){
            for(int p:primes){
                if(1LL*p*i>n) break;
                count++;
            }
        }
        cout<<count<<endl;
    }
}