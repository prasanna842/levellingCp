#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double inputs;
        cin>>inputs;
        double num=sqrt(inputs);
        int nums=(int)num;
        if(nums*nums==inputs){
            cout<<nums-1<<" "<<"1"<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}
