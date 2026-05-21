// Last updated: 22/05/2026, 00:15:33
1class Solution {
2public:
3    string toLowerCase(string s) {
4        string ans="";
5
6        for(char ch:s){
7            if(ch>='A'&& ch<='Z'){
8                ans+=ch+32;
9            }
10            else{
11                ans+=ch;
12            }
13        }
14
15        return ans;
16        
17    }
18};