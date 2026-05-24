// Last updated: 24/05/2026, 09:14:19
1class Solution {
2public:
3    int passwordStrength(string password) {
4        unordered_set<char> lower,upper,digit,special;
5
6            string sp="!@$#";
7
8            for(char ch:password){
9                if(ch>='a' && ch<='z'){
10                    lower.insert(ch);
11                }
12            
13
14            else if(ch>='A' && ch<='Z'){
15                upper.insert(ch);
16            }
17
18            else if(ch>='0' && ch<='9'){
19                digit.insert(ch);
20            }
21            else if(sp.find(ch)!=string::npos){
22                special.insert(ch);
23            }
24            }
25
26            return lower.size()*1+upper.size()*2+digit.size()*3+special.size()*5;
27        
28    }
29};