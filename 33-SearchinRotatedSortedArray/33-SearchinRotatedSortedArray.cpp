// Last updated: 06/05/2026, 15:32:27
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4         //always check for the sorted half either its left for right;
5        //after getting the sorted half check your target lies under that sorted half
6        int n=nums.size();
7        int low=0;
8        int high=n-1;
9
10        while(low<=high){
11            int mid=(low+high)/2;
12
13            if(nums[mid]==target){
14                return mid;
15            }
16
17            //if left half is sorted
18            if(nums[low]<=nums[mid]){
19                if(nums[low]<=target && target<=nums[mid]){
20                    high=mid-1;
21
22                }
23                else{
24                    low=mid+1;
25                }
26            }
27
28            //right half sorted
29            else{
30                if(nums[high]>=target && target>=nums[mid]){
31                    low=mid+1;
32                }
33
34                else{
35                    high=mid-1;
36                }
37            }
38
39        }
40        return -1;
41    }
42};