// Last updated: 18/05/2026, 00:19:31
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        
5        int low=0;
6        int mid=0;
7        int high=nums.size()-1;
8
9        while(mid<=high){
10
11            if(nums[mid]==0){
12                swap(nums[low],nums[mid]);
13                low++;
14                mid++;
15            }
16
17            else if(nums[mid]==1){
18                mid++;
19            }
20
21            else{
22                swap(nums[high],nums[mid]);
23                high--;
24            }
25        }
26    }
27};