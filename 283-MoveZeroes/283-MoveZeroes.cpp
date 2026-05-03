// Last updated: 03/05/2026, 11:28:47
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j=0;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            if(nums[i]!=0){
8                nums[j++]=nums[i];
9            }
10        }
11
12        while(j<n){
13            nums[j]=0;
14            j++;
15        }
16    }
17};