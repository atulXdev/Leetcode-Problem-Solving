// Last updated: 21/05/2026, 23:22:54
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string ans="";
5
6        for(char ch:address){
7            if(ch=='.'){
8                ans+="[.]";
9            }
10
11            else{
12                ans+=ch;
13            }
14        }
15
16        return ans;
17        
18    }
19};