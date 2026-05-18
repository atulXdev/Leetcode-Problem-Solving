// Last updated: 18/05/2026, 23:34:55
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4
5        int count=0;
6        int n=nums.size();
7
8        for(int i=0;i<n;i++){
9            int sum=0;
10            for(int j=i;j<n;j++){
11                sum+=nums[j];
12                if(sum==k){
13                    count++;
14                }
15            }
16
17
18            
19        }
20
21         return count;
22        
23    }
24};