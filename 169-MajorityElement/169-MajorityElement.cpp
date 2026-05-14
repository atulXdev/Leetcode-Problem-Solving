// Last updated: 14/05/2026, 16:58:26
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        int half=n/2;
6
7        unordered_map<int,int> mp;
8        for(int n:nums){
9            mp[n]++;
10            if(mp[n]>half){
11                return n;
12
13            }
14
15          
16        }
17
18          return -1;
19    }
20};