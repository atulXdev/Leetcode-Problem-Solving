// Last updated: 17/05/2026, 18:57:48
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4
5        unordered_map<int,int> mp;
6        //key:no val:index
7
8        for(int i=0;i<nums.size();i++){
9            int need=target-nums[i];
10
11            if(mp.find(need)!=mp.end()){
12                return {mp[need],i};
13            }
14
15            mp[nums[i]]=i;
16        }
17
18        return {};
19        
20    }
21};