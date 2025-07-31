#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
             dp[n-1][i]=matrix[n-1][i];
        }
        for(int j=n-2;j>=0;j--){
            int down=matrix[j][0]+dp[j][0];
            int dia=matrix[j][0]+dp[j+1][1];
            dp[j][0]=min(down,dia);
        }
        for(int i=n-2;i>=0;i--){
            int down=matrix[i][n-1]+dp[i+1][n-1];
            int dia=matrix[i][n-1]+dp[i+1][n-2];
            dp[i][n-1]=min(down,dia);
        }
        for(int i=n-2;i>=0;i--){
            for(int j=1;j<n-1;j++){
                int down = matrix[i][j]+dp[i+1][j];
                int diar=matrix[i][j]+dp[i+1][j+1];
                int dial=matrix[i][j]+dp[i+1][j-1];
                int k=min(down,dial);
                dp[i][j]=min(k,diar);
            }
        }
        return dp[n-2][n-2];
    }
};