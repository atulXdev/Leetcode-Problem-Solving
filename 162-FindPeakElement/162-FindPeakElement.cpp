// Last updated: 08/05/2026, 13:03:09
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4         int index=max_element(nums.begin(),nums.end())-nums.begin();
5    
6    return index;
7        
8    }
9};