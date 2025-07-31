#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> stairs(m,vector<int>(n));
        for(int i=0;i<m;i++){
            stairs[i][n-1]=1;
        }
        for(int i=0;i<n;i++){
            stairs[m-1][i]=1;
        }
        int k=0;
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
            stairs[i][j]=stairs[i+1][j]+stairs[i][j+1];
        }
        }
        return stairs[0][0];
    }
};