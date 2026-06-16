// Last updated: 16/06/2026, 15:49:30
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        string curr = "";
6
7        for (int i = 0; i <= path.size(); i++) {
8            if (i == path.size() || path[i] == '/') {
9
10                if (curr == "..") {
11                    if (!st.empty()) st.pop_back();
12                }
13                else if (curr != "" && curr != ".") {
14                    st.push_back(curr);
15                }
16
17                curr = "";
18            }
19            else {
20                curr += path[i];
21            }
22        }
23
24        if (st.empty()) return "/";
25
26        string ans = "";
27        for (string &dir : st) {
28            ans += "/" + dir;
29        }
30
31        return ans;
32    }
33};