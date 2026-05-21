// Last updated: 21/05/2026, 23:03:22
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left=0;
5        int right=0;
6        int zeroCount=0;
7        int maxi=0;
8
9        while(right<nums.size()){
10
11            if(nums[right]==0){
12                zeroCount++;
13            }
14
15            while(zeroCount>k){
16                if(nums[left]==0){
17                    zeroCount--;
18                }
19                left++;
20            }
21
22            maxi=max(maxi,right-left+1);
23
24            right++;
25
26        }
27
28        return maxi;
29        
30    }
31};