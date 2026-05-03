// Last updated: 03/05/2026, 12:23:29
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count=0;
5        int maxi=0;
6
7        for(int i=0;i<nums.size();i++){
8            if(nums[i]==1){
9                count++;
10                maxi=max(maxi,count);
11            }
12            else{
13                count=0;
14            }
15        }
16
17        return maxi;
18        
19    }
20};