#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1||obstacleGrid[0][0]==1) return 0;
        vector<vector<long long>> stairs(m,vector<long long>(n,0));
        stairs[m-1][n-1]=1;
        for(int i=m-2;i>=0;i--){
            if(obstacleGrid[i][n-1]==0)
            stairs[i][n-1]=stairs[i+1][n-1];
            else break;
        }
        for(int i=n-2;i>=0;i--){
            if(obstacleGrid[m-1][i]==0)
            stairs[m-1][i]=stairs[m-1][i+1];
            else break;
        }
        int k=0;
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(obstacleGrid[i][j]==0)
                stairs[i][j]=stairs[i+1][j]+stairs[i][j+1];
                else stairs[i][j]=0;
        }
        }
        return stairs[0][0];
    }
};