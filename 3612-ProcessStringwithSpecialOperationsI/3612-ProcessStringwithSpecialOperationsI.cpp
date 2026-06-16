// Last updated: 16/06/2026, 09:37:18
1class Solution {
2public:
3    string processStr(string s) {
4        string result="";
5
6        for(int i=0;i<s.size();i++){
7            if(isalpha(s[i])){
8                result+=s[i];
9            }
10            if(s[i]=='*' && !result.empty()){
11                result.pop_back();
12
13            }
14            if(s[i]=='#' && !result.empty()){
15                string temp=result;
16                result+=temp;
17            }
18
19            if(s[i]=='%' && !result.empty()){
20                reverse(result.begin(),result.end());
21            }
22        }
23
24        return result;
25        
26    }
27};