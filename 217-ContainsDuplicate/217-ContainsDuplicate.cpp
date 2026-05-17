// Last updated: 17/05/2026, 23:50:42
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4
5        unordered_set<int> st;
6
7        for(int n:nums){
8            if(!st.count(n)){
9                st.insert(n);
10            }
11            else{
12                return true;
13            }
14
15        }
16
17        return false;
18        
19    }
20};