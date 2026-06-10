// Last updated: 10/06/2026, 16:37:53
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int left=0;
5        int right=0;
6        int maxi=0;
7        unordered_set<int> st;
8        while(right<s.size()){
9            if(!st.count(s[right])){
10                st.insert(s[right]);
11                right++;
12            }
13            else{
14                st.erase(s[left]);
15                left++;
16            }
17            maxi=max(maxi,right-left);
18        }
19
20        return maxi;
21        
22    }
23};