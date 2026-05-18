// Last updated: 18/05/2026, 23:02:22
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        if(nums.size()==0){
5            return 0;
6        }
7
8
9        int count=1;
10        set<int> st(nums.begin(),nums.end());
11
12        vector<int> ans(st.begin(),st.end());
13         if(nums.size()==1 || ans.size()==1){
14            return 1;
15        }
16        int n=ans.size();
17
18        int maxi=1;
19
20        for(int i=0;i<n-1;i++){
21            int curr=ans[i]+1;
22            if(curr==ans[i+1]){
23                count++;
24
25                maxi=max(maxi,count);
26            }
27
28            else{
29                count=1;
30            }
31        }
32
33        return maxi;
34
35        
36    }
37};