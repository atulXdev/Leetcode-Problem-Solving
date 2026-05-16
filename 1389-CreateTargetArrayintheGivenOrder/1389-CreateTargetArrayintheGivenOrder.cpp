// Last updated: 16/05/2026, 15:13:15
1class Solution {
2public:
3    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
4
5        vector<int> target;
6
7        for(int i=0;i<nums.size();i++){
8            target.insert(target.begin()+index[i],nums[i]);
9        }
10
11        return target;
12        
13    }
14};