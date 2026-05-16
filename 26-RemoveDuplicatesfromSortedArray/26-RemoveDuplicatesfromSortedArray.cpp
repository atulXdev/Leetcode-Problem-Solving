// Last updated: 16/05/2026, 23:45:39
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4         int k=1;
5
6     for(int i=1;i<nums.size();i++){
7        if(nums[i]!=nums[i-1]){
8            nums[k]=nums[i];
9            k++;
10        }
11     }
12     return k;
13        
14    }
15};