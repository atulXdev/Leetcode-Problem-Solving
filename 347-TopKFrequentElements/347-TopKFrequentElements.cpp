// Last updated: 12/05/2026, 10:37:51
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4    unordered_map<int,int> mp;
5
6     //count freq of each element in unordered map
7     for(int n:nums){
8        mp[n]++;
9     }
10
11     //priority queue to store elements in odrder of highest freq
12
13     priority_queue<pair<int,int>> pq;
14
15     for(auto it:mp){
16        int key=it.first;
17        int freq=it.second;
18    pq.push({freq,key});
19
20     }
21
22     vector<int> ans;
23      //taking top k elemnts jitna k utna no of elemnts
24
25      while(k--){
26        ans.push_back(pq.top().second);
27        pq.pop();
28      }
29
30      return ans;
31
32
33        
34    }
35};