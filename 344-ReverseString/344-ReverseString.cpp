// Last updated: 04/06/2026, 17:24:40
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        multiset<int> ms;
5        for(int i=0;i<nums.size();i++){
6            int num=abs(nums[i]*nums[i]);
7            ms.insert(num);
8        }
9
10        vector<int> ans(ms.begin(),ms.end());
11
12        return ans;
13
14        
15    }
16};