// Last updated: 14/05/2026, 16:26:01
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>> mp;
5
6        for(string s:strs){
7            string temp=s;
8            sort(s.begin(),s.end());
9            mp[s].push_back(temp);
10        }
11
12        vector<vector<string>> ans;
13
14        for(auto it:mp){
15            ans.push_back(it.second);
16        }
17
18        return ans;
19        
20    }
21};