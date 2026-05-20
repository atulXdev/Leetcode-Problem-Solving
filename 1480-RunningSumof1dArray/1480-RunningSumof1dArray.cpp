// Last updated: 20/05/2026, 17:30:18
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4
5        for(int i=1;i<nums.size();i++){
6
7            nums[i]+=nums[i-1];
8        }
9
10        return nums;
11        
12    }
13};