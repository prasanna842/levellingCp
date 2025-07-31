#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(long long i=0;i<nums.size();i++){
            long long count =0;
            while(i+1<nums.size()&&(long long)nums[i+1]-(long long)nums[i]==1){
                i++;
                count++;
            }
            if(count>0)
            ans.push_back(to_string(nums[i-count])+"->"+to_string(nums[i]));
            else {
                ans.push_back(to_string(nums[i]));
            }
        }
        return ans;
    }
};