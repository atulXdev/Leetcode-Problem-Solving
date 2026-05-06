// Last updated: 06/05/2026, 14:53:51
1class Solution {
2public:
3
4    int firstocc(vector<int>& nums, int n, int target) {
5        int low = 0;
6        int high = n - 1;
7        int first = -1;
8
9        while (low <= high) {
10            int mid = (low + high) / 2;
11
12            if (nums[mid] == target) {
13                first = mid;
14                high = mid - 1; // move left
15            }
16            else if (nums[mid] > target) {
17                high = mid - 1;
18            }
19            else {
20                low = mid + 1;
21            }
22        }
23
24        return first;
25    }
26
27    int secondocc(vector<int>& nums, int n, int target) {
28        int low = 0;
29        int high = n - 1;
30        int second = -1;
31
32        while (low <= high) {
33            int mid = (low + high) / 2;
34
35            if (nums[mid] == target) {
36                second = mid;
37                low = mid + 1; // move right
38            }
39            else if (nums[mid] > target) {
40                high = mid - 1;
41            }
42            else {
43                low = mid + 1;
44            }
45        }
46
47        return second;
48    }
49
50    vector<int> searchRange(vector<int>& nums, int target) {
51        int n = nums.size();
52
53        int first = firstocc(nums, n, target);
54
55        if (first == -1)
56            return {-1, -1};
57
58        int last = secondocc(nums, n, target);
59
60        return {first, last};
61    }
62};