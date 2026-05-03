// Last updated: 03/05/2026, 11:36:04
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j=0;
5        int n=nums.size();
6  //placing all non zero elemnt to lhs
7        for(int i=0;i<n;i++){
8            if(nums[i]!=0){
9                nums[j++]=nums[i];
10            }
11        }
12
13        //placing zeros for the remaining elements
14
15        while(j<n){
16            nums[j]=0;
17            j++;
18        }
19        
20    }
21};