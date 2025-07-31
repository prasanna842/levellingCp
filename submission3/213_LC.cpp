#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp(n-1,-1);
        vector<int> dps(n,-1);
        dp[0]=nums[0];
        for(int i=1;i<n-1;i++){
            int c=nums[i]+((i>1)? dp[i-2]:0);
            int nc=dp[i-1];
            dp[i]=max(c,nc);
        }
        dps[0]=0;
        dps[1]=nums[1];
        for(int i=2;i<n;i++){
            int c=nums[i]+((i>1)? dps[i-2]:0);
            int nc=dps[i-1];
            dps[i]=max(c,nc);
        }
        return(max(dp[n-2],dps[n-1]));
    }
};