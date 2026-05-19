// Last updated: 19/05/2026, 19:42:15
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4
5        unordered_map<int,int> mp;
6
7        for(int i=0;i<numbers.size();i++){
8            int j=i+1;
9            int need=target-numbers[i];
10            if(mp.count(need)){
11                return {mp[need],j};
12            }
13
14            mp[numbers[i]]=j;
15        }
16
17        return {-1,-1};
18        
19    }
20};