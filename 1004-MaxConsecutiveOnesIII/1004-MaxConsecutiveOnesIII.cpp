// Last updated: 22/05/2026, 00:06:43
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left=0;
5        int right=0;
6        int zeroCount=0;
7        int maxi=0;
8
9        while(right<nums.size()){
10            if(nums[right]==0){
11                zeroCount++;
12            }
13
14            while(zeroCount>k){
15                if(nums[left]==0){
16                    zeroCount--;
17                }
18                left++;
19            }
20
21            maxi=max(maxi,right-left+1);
22
23            right++;
24        }
25
26        return maxi;
27        
28    }
29};