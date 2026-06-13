// Last updated: 13/06/2026, 22:20:14
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for(int i=0;i<s.size();i++){
7            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
8                st.push(s[i]);
9            }
10
11            else {
12               if(st.empty()) return false;
13               if(
14                (s[i]==')' && st.top() !='(')||
15                (s[i]=='}' && st.top() !='{')||
16                (s[i]==']' && st.top() !='[')
17               )
18                return false;
19                st.pop();
20            }
21        }
22
23        return st.empty();
24        
25    }
26};