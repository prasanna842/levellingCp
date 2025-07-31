#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        if(total%2==1){
            return false;
        }else{
            int k=total/2;
            vector<vector<bool>> dp(n,vector<bool>(k+1,false));
            for(int i=0;i<n;i++){
                dp[i][0]=true;
            }
            if(nums[0]<=k){
                dp[0][nums[0]]=true;
            }
            for(int ind=1;ind<n;ind++){
                for(int target=1;target<=k;target++){
                    bool nottaken=dp[ind-1][target];
                    bool taken=false;
                    if(target>=nums[ind])
                    taken=dp[ind-1][target-nums[ind]];
                    dp[ind][target]=taken||nottaken;
                }
            }
            return dp[n-1][total/2];
        }
    }
};