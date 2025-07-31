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
        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(j==n-1){
                    dp[i][n-1]=matrix[i][n-1]+min(dp[i+1][n-1],dp[i+1][n-2]);
                }else if(j==0){
                    dp[i][0]=matrix[i][0]+min(dp[i+1][1],dp[i+1][0]);
                }else{
                    int k=min(dp[i+1][j],dp[i+1][j+1]);
                    dp[i][j]=min(dp[i+1][j-1],k)+matrix[i][j];
                }
            }
        }
        int maxi=1e9;
        for(int i=0;i<n;i++){
            maxi=min(maxi,dp[0][i]);
        }
        return maxi;
    }
};