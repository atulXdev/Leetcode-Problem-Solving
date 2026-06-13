// Last updated: 13/06/2026, 09:51:44
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        vector<int> common(26, INT_MAX);
5
6        for (string &word : words) {
7            vector<int> freq(26, 0);
8
9            for (char ch : word)
10                freq[ch - 'a']++;
11
12            for (int i = 0; i < 26; i++)
13                common[i] = min(common[i], freq[i]);
14        }
15
16        vector<string> ans;
17
18        for (int i = 0; i < 26; i++) {
19            while (common[i]--) {
20                ans.push_back(string(1, 'a' + i));
21            }
22        }
23
24        return ans;
25    }
26};