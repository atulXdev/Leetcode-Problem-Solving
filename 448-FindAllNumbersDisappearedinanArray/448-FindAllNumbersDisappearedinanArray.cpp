// Last updated: 29/05/2026, 23:30:16
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4
5        for(int i = 0; i < nums.size(); i++) {
6            int idx = abs(nums[i]) - 1;
7
8            if(nums[idx] > 0)
9                nums[idx] = -nums[idx];
10        }
11
12        vector<int> ans;
13
14        for(int i = 0; i < nums.size(); i++) {
15            if(nums[i] > 0)
16                ans.push_back(i + 1);
17        }
18
19        return ans;
20    }
21};