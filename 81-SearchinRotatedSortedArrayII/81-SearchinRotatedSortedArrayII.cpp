// Last updated: 07/05/2026, 11:42:25
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        int n=nums.size();
5        int low=0;
6        int high=n-1;
7
8        while(low<=high){
9            int mid=(low+high)/2;
10
11            if(nums[mid]==target){
12                return true;
13            }
14            //handeling the edge for deuplicate element
15            //what happen if low mid and high are same=> how will you check the sorted half
16            //simply we will trim the search space
17            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
18                low=low+1;
19                high=high-1;
20                continue;
21            }
22
23            //if left half is sorted
24            if(nums[low]<=nums[mid]){
25       //elemnt target in left half range then trim left half
26                if(nums[low]<=target && target<=nums[mid]){
27                    high=mid-1;
28                }
29                else{
30                    low=mid+1;
31                }
32            }
33
34            //else right half is sorted
35            else{
36                if(nums[high]>=target && target>=nums[mid]){
37                    low=mid+1;
38                }
39
40                else{
41
42                    high=mid-1;
43                }
44            }
45        }
46
47        return false;
48        
49        
50    }
51};