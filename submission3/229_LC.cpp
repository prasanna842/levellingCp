#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>nums.size()/3&&freq[nums[i]]<nums.size()/3+2){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};