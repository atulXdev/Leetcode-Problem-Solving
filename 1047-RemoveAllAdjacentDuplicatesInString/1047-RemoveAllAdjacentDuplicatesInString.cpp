// Last updated: 05/06/2026, 13:28:46
1class Solution {
2public:
3    string removeDuplicates(string s) {
4
5        string st;
6
7        for(char ch:s){
8            if(!st.empty() && st.back()==ch){
9                st.pop_back();
10            }
11            else{
12                st.push_back(ch);
13
14            }
15        }
16
17        return st;
18        
19    }
20};