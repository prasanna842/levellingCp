#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long ans=0;
        long long cnt=0;
        for(int i=n-2;i>=0&cnt!=n/3;i--){
            ans+=nums[i];i--;
            cnt++;
        }
        return ans;
    }
};