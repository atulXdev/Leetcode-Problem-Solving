// Last updated: 06/05/2026, 14:09:50
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4 //time O(n)--> we want in O(logn) linear search
5  int first=-1;
6  int second=-1;
7  int n=nums.size();
8   for(int i=0;i<n;i++){
9    if(nums[i]==target){
10        if(first==-1){
11            first=i;
12
13       }
14
15       second=i;
16    }
17   } 
18   vector<int> ans={first,second};
19
20   return ans;   
21    }
22};