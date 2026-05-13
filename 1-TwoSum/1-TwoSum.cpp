// Last updated: 13/05/2026, 23:29:04
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4
5        vector<int> ans;
6        
7
8        for(int i=0;i<nums.size();i++){
9            int sum=0;
10            for(int j=i+1;j<nums.size();j++){
11                sum=nums[i]+nums[j];
12
13               
14
15                if(sum==target){ 
16                ans.push_back(i);
17                ans.push_back(j);
18
19                    return ans;
20                }
21
22            }
23        }
24
25        return {-1,-1};
26        
27    }
28};