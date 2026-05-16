// Last updated: 16/05/2026, 13:21:33
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n,0);
6         ans[0]=nums[0];
7for(int i=1;i<n;i++){
8    ans[i]=nums[i]+ans[i-1];
9}
10
11return ans;
12        
13    }
14};