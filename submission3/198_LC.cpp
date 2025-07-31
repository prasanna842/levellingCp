#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int c=nums[i]+((i>1)? dp[i-2]:0);
            int nc=dp[i-1];
            dp[i]=max(c,nc);
        }
        return dp[n-1];
    }
};