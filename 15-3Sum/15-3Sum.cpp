// Last updated: 22/05/2026, 22:10:52
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> ans;
5        sort(nums.begin(), nums.end());
6
7        int n = nums.size();
8
9        for(int i = 0; i < n; i++) {
10
11            // skip duplicate i
12            if(i > 0 && nums[i] == nums[i - 1]) continue;
13
14            int left = i + 1;
15            int right = n - 1;
16
17            while(left < right) {
18                int sum = nums[i] + nums[left] + nums[right];
19
20                if(sum == 0) {
21                    ans.push_back({nums[i], nums[left], nums[right]});
22
23                    left++;
24                    right--;
25
26                    // skip duplicate left
27                    while(left < right && nums[left] == nums[left - 1]) left++;
28
29                    // skip duplicate right
30                    while(left < right && nums[right] == nums[right + 1]) right--;
31                }
32                else if(sum < 0) {
33                    left++;
34                }
35                else {
36                    right--;
37                }
38            }
39        }
40
41        return ans;
42    }
43};