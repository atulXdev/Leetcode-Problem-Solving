// Last updated: 23/05/2026, 23:55:36
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4
5        int n=nums.size();
6        if(n==1){
7            return 0;
8        }
9
10        if(nums[0]>nums[1]){
11            return 0;
12        }
13
14        if(nums[n-1]>nums[n-2]){
15            return n-1;
16        }
17
18        int low=1;
19        int high=n-2;
20
21        while(low<=high){
22            int mid=(low+high)/2;
23
24            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
25                return mid;
26            }
27
28            //inc peak
29
30            else if(nums[mid]>nums[mid-1]){
31                low=mid+1;
32            }
33
34            else{
35                high=mid-1;
36            }
37        }
38
39        return -1;
40
41        
42    }
43};