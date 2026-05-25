// Last updated: 25/05/2026, 10:41:25
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        
5        vector<int> freq(26,0);
6
7        for(char ch:magazine){
8            freq[ch-'a']++;
9        }
10
11        for(char ch:ransomNote){
12            if(freq[ch-'a']==0){
13                return false;
14            }
15
16            freq[ch-'a']--;
17        }
18
19        return true;
20    }
21};