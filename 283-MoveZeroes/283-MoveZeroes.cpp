// Last updated: 01/05/2026, 23:23:26
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4   int j=0;
5   int n=nums.size();
6//pushing all non zero element forward
7   for(int i=0;i<n;i++){
8    if(nums[i]!=0){
9        nums[j++]=nums[i];
10    }
11   }
12
13//all right gaps left for zeros are filled wth zeros
14   while(j<n){
15    nums[j]=0;
16    j++;
17   }
18    }
19};