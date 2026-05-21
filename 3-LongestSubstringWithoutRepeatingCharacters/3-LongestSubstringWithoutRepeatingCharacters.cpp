// Last updated: 21/05/2026, 21:47:56
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        int maxi=0;
6        int n=s.size();
7
8        for(int i=0;i<n;i++){
9            st.clear();
10            for(int j=i;j<n;j++){
11                if(!st.count(s[j])){
12                    st.insert(s[j]);
13                    int n=st.size();
14                maxi=max(n,maxi);
15                }
16                else{
17                    break;
18                }
19
20            }
21        }
22
23        return maxi;
24
25        
26    }
27};