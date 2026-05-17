// Last updated: 18/05/2026, 00:28:49
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4
5        int low=0;
6        int high=nums.size()-1;
7
8        while(low<=high){
9            int mid=(low+high)/2;
10            if(nums[mid]==target){
11                return mid;
12            }
13
14            if(nums[mid]>target){
15                high=mid-1;
16            }
17
18            else{
19
20                low=mid+1;
21
22            }
23        }
24
25        return -1;
26
27        
28    }
29};