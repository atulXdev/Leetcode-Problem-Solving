// Last updated: 17/05/2026, 18:25:51
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st;
5
6        for(int n:nums){
7            if(!st.count(n)){
8                st.insert(n);
9            }
10
11            else{
12                return true;
13            }
14        }
15
16        return false;
17        
18    }
19};