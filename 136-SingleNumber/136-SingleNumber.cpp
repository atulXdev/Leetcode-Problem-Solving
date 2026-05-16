// Last updated: 16/05/2026, 23:32:38
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4
5        int ans=0;
6
7        for(int num:nums){
8            ans=ans^num;
9        }
10
11        return ans;
12        
13    }
14};