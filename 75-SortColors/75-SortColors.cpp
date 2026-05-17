// Last updated: 17/05/2026, 20:10:07
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int low=0;
5        int mid=0;
6        int high=nums.size()-1;
7
8        while(mid<=high){
9            if(nums[mid]==0){
10                swap(nums[low],nums[mid]);
11                low++;
12                mid++;
13            }
14            else if(nums[mid]==1){
15                mid++;
16            }
17
18            else{
19                swap(nums[high],nums[mid]);
20                high--;
21            }
22        }
23
24        
25    }
26};