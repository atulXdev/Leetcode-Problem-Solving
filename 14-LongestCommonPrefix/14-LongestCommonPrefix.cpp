// Last updated: 14/05/2026, 16:14:07
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string prefix=strs[0];
5
6        for(int i=1;i<strs.size();i++){
7            while(strs[i].find(prefix)!=0){
8                prefix.pop_back();
9            }
10        }
11
12        return prefix;
13        
14    }
15};