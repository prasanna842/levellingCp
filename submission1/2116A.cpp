#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        bool found=true;
        int k=1;
        long long g,f,gk,fk;cin>>g>>f>>gk>>fk;
        if (min(g, gk) < min(f, fk)) {
            cout << "Flower" << endl;
        } else {
            cout << "Gellyfish" << endl;
        }
    }
}