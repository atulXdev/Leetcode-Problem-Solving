// Last updated: 18/05/2026, 00:03:23
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        //key:no val:index
6
7        for(int i=0;i<nums.size();i++){
8            int need=target-nums[i];
9
10            if(mp.find(need)!=mp.end()){
11                return {mp[need],i};
12            }
13
14            mp[nums[i]]=i;
15        }
16        
17        return {};
18    }
19};