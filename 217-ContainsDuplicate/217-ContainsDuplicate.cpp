// Last updated: 18/05/2026, 00:09:53
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4
5        int k=0;
6
7        for(int i=0;i<nums.size();i++){
8            if(nums[i]!=val){
9                nums[k]=nums[i];
10                k++;
11            }
12        }
13
14        return k;
15        
16    }
17};