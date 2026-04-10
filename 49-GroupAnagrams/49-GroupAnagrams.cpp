// Last updated: 10/04/2026, 14:52:59
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>> mp;
5
6        for(string s:strs){
7            string temp=s;
8            sort(temp.begin(),temp.end());
9
10            mp[temp].push_back(s);
11        }
12        vector<vector<string>> ans;
13        for(auto it:mp){
14        ans.push_back(it.second);
15        }
16
17        return ans;
18    }
19};