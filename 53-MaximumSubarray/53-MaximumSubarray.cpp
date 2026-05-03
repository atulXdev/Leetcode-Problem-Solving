// Last updated: 03/05/2026, 11:46:24
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int sum=0;
5        int maxi=INT_MIN;
6        int n=nums.size();
7
8        for(int i=0;i<n;i++){
9            sum+=nums[i];
10
11            if(sum>maxi){
12                maxi=sum;
13            }
14
15            if(sum<0){
16                sum=0;
17            }
18        }
19
20        return maxi;
21        
22    }
23};