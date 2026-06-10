// Last updated: 10/06/2026, 16:37:32
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5
6        for(int i=0;i<nums.size();i++){
7            int need=target-nums[i];
8
9            if(mp.count(need)){
10                return {mp[need],i};
11            }
12
13            mp[nums[i]]=i;
14        }
15        return {};
16    }
17};