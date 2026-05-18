// Last updated: 18/05/2026, 22:14:55
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5
6        vector<int> ans(n,1);
7        //in ans vector we will store sprefix product
8
9int prefix=1;
10        for(int i=0;i<n;i++){
11            ans[i]=prefix;
12            prefix*=nums[i];
13        }
14
15        int suffix=1;
16        for(int i=n-1;i>=0;i--){
17            ans[i]*=suffix;
18            suffix*=nums[i];
19        }
20
21        return ans;
22        
23    }
24};