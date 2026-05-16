// Last updated: 16/05/2026, 13:00:31
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n,0);
6         ans[0]=nums[0];
7
8        for(int i=1;i<n;i++){
9            int sum=0;
10
11            int j=i;
12            while(j>=0){
13            sum+=nums[j];
14            j--;}
15
16            ans[i]=sum;
17            
18
19        }
20
21        return ans;
22        
23    }
24};