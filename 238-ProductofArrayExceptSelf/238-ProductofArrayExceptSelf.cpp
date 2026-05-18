// Last updated: 18/05/2026, 22:04:06
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5  vector<int> ans(n,1);
6  int  prefix=1;
7  for(int i=0;i<n;i++){
8    ans[i]=prefix;
9    prefix*=nums[i];
10  }
11
12  int suffix=1;
13  for(int i=n-1;i>=0;i--){
14    ans[i]*=suffix;
15    suffix*=nums[i];
16  }
17
18  return ans;
19    }
20};