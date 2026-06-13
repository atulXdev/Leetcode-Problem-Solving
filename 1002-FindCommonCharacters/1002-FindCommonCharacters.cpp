// Last updated: 13/06/2026, 10:04:36
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4
5        string s = words[0];
6        vector<string> ans;
7
8        for (char c : s) {
9
10            int ind = 0;
11
12            for (int i = 1; i < words.size(); i++) {
13
14                ind = words[i].find(c);
15
16                if (ind == string::npos)
17                    break;
18
19                words[i].erase(ind, 1);
20            }
21
22            if (ind != string::npos)
23                ans.push_back(string(1, c));
24        }
25
26        return ans;
27    }
28};