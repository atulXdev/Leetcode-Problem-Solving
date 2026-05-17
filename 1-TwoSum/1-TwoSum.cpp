// Last updated: 17/05/2026, 18:37:32
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<int> ans;
5        for(int i=0;i<nums.size();i++){
6            for(int j=i+1;j<nums.size();j++){
7                if(nums[i]+nums[j]==target){
8                    ans.push_back(i);
9                    ans.push_back(j);
10                }
11
12            }
13        }
14
15        return ans;
16        
17    }
18};