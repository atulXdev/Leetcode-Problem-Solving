// Last updated: 14/05/2026, 16:01:29
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4
5        string prefix=strs[0];
6
7        for(int i=1;i<strs.size();i++){
8            
9            while(strs[i].find(prefix)!=0){
10                prefix.pop_back();
11            }
12        }
13
14        return prefix;
15        
16    }
17};