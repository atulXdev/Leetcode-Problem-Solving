// Last updated: 03/05/2026, 11:04:32
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4     
5     int n=nums.size();
6     int count=0;
7      
8      for(int i=0;i<n;i++){
9        if(nums[i]>nums[(i+1)%n]){
10            count++;
11        }
12      }
13
14      if(count<=1){
15        return true;
16      }
17
18      else{
19        return false;
20      }
21        
22    }
23};