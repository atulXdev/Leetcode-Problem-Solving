// Last updated: 13/04/2026, 10:04:59
1class Solution {
2public:
3    int firstUniqChar(string s) {
4       unordered_map<char,int> mp;
5
6for(char c : s) mp[c]++;
7
8for(int i = 0; i < s.size(); i++) {
9    if(mp[s[i]] == 1) return i;
10}
11
12return -1;
13
14    }
15};