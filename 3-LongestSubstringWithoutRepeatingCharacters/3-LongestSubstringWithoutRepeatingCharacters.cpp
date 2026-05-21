// Last updated: 21/05/2026, 23:43:54
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int left=0;
5        int right=0;
6        int maxi=0;
7        unordered_set<char> st;
8
9        while(right<s.size()){
10
11            if(!st.count(s[right])){
12                st.insert(s[right]);
13                right++;
14            }
15            else{
16                st.erase(s[left]);
17                left++;
18            }
19
20            maxi=max(maxi,right-left);
21        }
22
23        return maxi;
24        
25    }
26};