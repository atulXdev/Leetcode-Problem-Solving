// Last updated: 15/04/2026, 10:12:03
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char, char> m1, m2;
5
6        for (int i = 0; i < s.size(); i++) {
7            if (m1[s[i]] != m2[t[i]]) {
8                return false;
9            }
10            m1[s[i]] = i + 1;
11            m2[t[i]] = i + 1;
12        }
13
14        return true;
15        
16    }
17};