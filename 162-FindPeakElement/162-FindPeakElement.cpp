// Last updated: 24/05/2026, 00:09:13
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n=nums.size();
5
6        if(n==1){
7            return 0;
8        }
9        if(nums[0]>nums[1]){
10            return 0;
11        }
12        if(nums[n-1]>nums[n-2]){
13            return n-1;
14        }
15
16        int low=1;
17        int high=n-2;
18        while(low<=high){
19            int mid=(low+high)/2;
20
21            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
22                return mid;
23            }
24
25            else if(nums[mid]>nums[mid-1]){
26                low=mid+1;
27            }
28
29            else{
30                high=mid-1;
31            }
32        }
33
34        return -1;
35        
36    }
37};