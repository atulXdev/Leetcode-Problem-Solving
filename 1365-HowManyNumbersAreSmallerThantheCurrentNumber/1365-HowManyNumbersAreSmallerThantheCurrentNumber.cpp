// Last updated: 16/05/2026, 15:00:12
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> ans;
5
6        for(int i=0;i<nums.size();i++){
7            int count=0;
8            for(int j=0;j<nums.size();j++){
9                if(nums[i]!=nums[j] && nums[i]>nums[j]){
10                    count++;
11                    
12                }
13            }
14
15            ans.push_back(count);
16        }
17
18        return ans;
19        
20    }
21};