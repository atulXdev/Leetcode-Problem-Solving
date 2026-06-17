// Last updated: 17/06/2026, 10:02:08
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low=0;
5        int high=nums.size()-1;
6
7        while(low<=high){
8            int mid=(low+high)/2;
9
10            if(target==nums[mid]){
11                return mid;
12            }
13
14            else if(target>nums[mid]){
15                low=mid+1;
16            }
17
18            else{
19                high=mid-1;
20            }
21        }
22
23        return -1;
24        
25    }
26};