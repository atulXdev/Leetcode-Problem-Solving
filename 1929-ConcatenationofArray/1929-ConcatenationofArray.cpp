// Last updated: 10/05/2026, 22:24:02
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n=nums.size();
5        int l=n+n;
6
7        vector<int> ans(l,0);
8
9        for(int i=0;i<n;i++){
10            int si=i+n;
11            ans[i]=nums[i];
12            ans[si]=nums[i];
13        }
14
15        return ans;
16        
17    }
18};