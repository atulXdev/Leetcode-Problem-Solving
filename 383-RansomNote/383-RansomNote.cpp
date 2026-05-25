// Last updated: 25/05/2026, 11:08:06
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        int mini = min(word1.size(), word2.size());
5        string ans = "";
6
7        for(int i = 0; i < mini; i++){
8            ans += word1[i];
9            ans += word2[i];
10
11            if(i == mini-1 && word1.size() != mini){
12                for(int j = mini; j < word1.size(); j++){
13                    ans += word1[j];
14                }
15            }
16
17            if(i == mini-1 && word2.size() != mini){
18                for(int j = mini; j < word2.size(); j++){
19                    ans += word2[j];
20                }
21            }
22        }
23
24        return ans;
25    }
26};