// Last updated: 24/05/2026, 09:02:51
1class Solution {
2public:
3    vector<int> limitOccurrences(vector<int>& nums, int k) {
4        vector<int> ans;
5        for(int i=0;i<nums.size();i++){
6            if(ans.size()<k || nums[i]!=ans[ans.size()-k]){
7                ans.push_back(nums[i]);
8            }
9        }
10
11        return ans;
12        
13    }
14};