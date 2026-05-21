// Last updated: 21/05/2026, 22:16:12
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int left=0;
5        int right=0;
6        int maxi=0;
7        unordered_set<char> st;
8        while(right<s.size()){
9            if(!st.contains(s[right])){
10                st.insert(s[right]);
11                right++;
12
13            }
14            else{
15                st.erase(s[left]);
16                left++;
17
18            }
19            maxi=max(maxi,right-left);
20
21            }
22
23            return maxi;
24        
25        
26    }
27};