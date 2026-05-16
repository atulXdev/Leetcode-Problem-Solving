// Last updated: 16/05/2026, 16:42:25
1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4
5        vector<int> missing;
6        unordered_set<int> st;
7        st.insert(arr.begin(),arr.end());
8
9int i=1;
10        while(missing.size()<k){
11            if(!st.count(i)){
12                missing.push_back(i);
13
14            }
15            i++;
16            }
17        
18        int ans=missing[k-1];
19        return ans;
20    }
21};