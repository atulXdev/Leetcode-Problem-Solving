// Last updated: 17/05/2026, 00:09:07
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n,0);
6        ans[0]=nums[0];
7
8        for(int i=1;i<nums.size();i++){
9            ans[i]=nums[i]+ans[i-1];
10        }
11
12        return ans;
13        
14    }
15};