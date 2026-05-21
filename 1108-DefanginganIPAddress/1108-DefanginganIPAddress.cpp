// Last updated: 21/05/2026, 23:31:07
1class Solution {
2public:
3    string defangIPaddr(string address) {
4
5        string ans="";
6
7        for(char ch:address){
8            if(ch=='.'){
9                ans+="[.]";
10            }
11            else{
12                ans+=ch;
13            }
14        }
15
16        return ans;
17        
18    }
19};