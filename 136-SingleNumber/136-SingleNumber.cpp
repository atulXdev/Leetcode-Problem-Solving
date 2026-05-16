// Last updated: 16/05/2026, 23:26:26
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans=0;
5
6        for(int num:nums){
7            ans=ans^num;
8        }
9        return ans;
10    }
11};