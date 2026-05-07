// Last updated: 07/05/2026, 16:13:40
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        //bruteforce:sare element ka left right check krenge agar koi vi equal nhe mila then
5        //eg your ans
6
7        int n=nums.size();
8        if(n==1){
9            return nums[0];
10        }
11        for(int i=0;i<n;i++){
12            //for first elemt only right we have
13            if(i==0){
14                if(nums[i]!=nums[i+1]){
15                    return nums[i];
16                }
17            }
18
19            //if last elememt only left we have
20           else if(i==n-1){
21            if(nums[i]!=nums[i-1]){
22                return nums[i];
23            }
24           }
25
26           //any middle elemnt we will check left and right both
27           else{
28            if(nums[i]!=nums[i-1]&& nums[i]!=nums[i+1]){
29                return nums[i];
30            }
31           }
32        }
33
34        return -1;
35        
36    }
37};