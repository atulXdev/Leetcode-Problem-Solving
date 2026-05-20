// Last updated: 20/05/2026, 22:42:49
1class Solution {
2public:
3    string frequencySort(string s) {
4        unordered_map<char, int> mp;
5
6        // count frequency
7        for (char ch : s) {
8            mp[ch]++;
9        }
10
11        vector<pair<int, char>> v;
12
13        // store count and character
14        for (auto it : mp) {
15            v.push_back({it.second, it.first});
16        }
17
18        // sort by count descending
19        sort(v.rbegin(), v.rend());
20
21        string ans = "";
22
23        // build answer
24        for (auto it : v) {
25            int count = it.first;
26            char ch = it.second;
27
28            while (count--) {
29                ans += ch;
30            }
31        }
32
33        return ans;
34    }
35};