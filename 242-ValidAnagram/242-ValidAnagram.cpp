// Last updated: 11/05/2026, 12:30:36
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4      if(s.size()!=t.size()){
5        return false;
6      }
7//as all letters in lowercase we can use this
8      vector<int> freq(26,0);
9      //this vector should reamin 0 for anagram
10      //neutal throem =>no spike should be visible
11
12      for(int i=0;i<s.size();i++){
13        freq[s[i]-'a']++;
14        freq[t[i]-'a']--;
15      }
16
17      for(int count:freq){
18        if(count!=0){
19            return false;
20        }
21      }
22
23      return true;
24
25        
26    }
27};