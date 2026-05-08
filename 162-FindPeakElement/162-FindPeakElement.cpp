// Last updated: 08/05/2026, 14:06:36
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n=nums.size();
5        //if one element
6        if(n==1){
7            return 0;
8        }
9        //Edge case where fisrt or last elemnt can be peak
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
20        while(low<=high){
21            int mid=(low+high)/2;
22            if(nums[mid]>nums[mid-1]&& nums[mid]>nums[mid+1]){
23                return mid;
24            }
25            //if mid on increasing curve then trim the left half
26
27            else if(nums[mid]>nums[mid-1]){
28                low=mid+1;
29
30            }
31
32            else{
33
34                high=mid-1;
35            }
36        }
37
38        return -1;  
39        
40    }
41};