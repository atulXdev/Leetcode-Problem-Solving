// Last updated: 31/05/2026, 22:10:55
1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4
5        deque<int> dq;
6        vector<int> ans;
7
8        for(int i = 0; i < nums.size(); i++) {
9
10            // Remove elements outside window
11            while(!dq.empty() && dq.front() <= i - k) {
12                dq.pop_front();
13            }
14
15            // Remove smaller elements
16            while(!dq.empty() && nums[dq.back()] <= nums[i]) {
17                dq.pop_back();
18            }
19
20            dq.push_back(i);
21
22            if(i >= k - 1) {
23                ans.push_back(nums[dq.front()]);
24            }
25        }
26
27        return ans;
28    }
29};