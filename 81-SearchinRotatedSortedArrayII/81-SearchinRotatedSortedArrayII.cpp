// Last updated: 07/05/2026, 11:06:40
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        sort(nums.begin(),nums.end());
5      bool ans=binary_search(nums.begin(),nums.end(),target);
6      return ans;  
7    }
8};