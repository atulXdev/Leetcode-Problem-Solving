// Last updated: 01/05/2026, 23:35:10
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count=0;
5        int maxi=0;
6
7        for(int i=0;i<nums.size();i++){
8            if(nums[i]==1){
9                count++;
10
11                maxi=max(count,maxi);
12            }
13
14            else{
15                count=0;
16            }
17        }
18
19        return maxi;
20    }
21};