// Last updated: 10/04/2026, 17:26:22
1class Solution {
2    public int pivotIndex(int[] nums) {
3        int total=0;
4        for (int num:nums){
5            total+=num;
6        }
7        int leftsum=0;
8      
9      for(int i=0;i<nums.length;i++){
10        int rightsum=total-nums[i]-leftsum;
11
12        if(leftsum==rightsum){
13            return i;
14        }
15
16        leftsum+=nums[i];
17
18      }
19        return -1;
20    }
21}