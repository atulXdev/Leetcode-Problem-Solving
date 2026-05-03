// Last updated: 03/05/2026, 11:15:55
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4
5        int count=0;
6        int n=nums.size();
7
8        for(int i=0;i<n;i++){
9            if(nums[i]>nums[(i+1)%n]){
10                count++;
11
12            }
13        }
14
15        if(count<=1){
16            return true;
17        }
18
19        else{
20            return false;
21        }
22        
23    }
24};