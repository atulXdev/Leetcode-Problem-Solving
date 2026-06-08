// Last updated: 08/06/2026, 10:01:39
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> less;
5        vector<int> more;
6        vector<int> eq;
7        vector<int> ans;
8
9        for(int i=0;i<nums.size();i++){
10            if(nums[i]<pivot){
11                less.push_back(nums[i]);
12            }
13            else if(nums[i]==pivot){
14                eq.push_back(nums[i]);
15
16            }
17            else{
18                more.push_back(nums[i]);
19            }
20        }
21        ans.insert(ans.end(),less.begin(),less.end());
22        ans.insert(ans.end(),eq.begin(),eq.end());
23        ans.insert(ans.end(),more.begin(),more.end());
24        return ans;
25
26        
27    }
28};