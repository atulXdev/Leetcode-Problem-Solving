// Last updated: 04/06/2026, 17:46:31
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int left=0;
5        int right=nums.size()-1;
6        int n = nums.size();
7
8        vector<int> ans(n);
9        int k=nums.size()-1;
10        while(left<=right){
11            if(abs(nums[left])>abs(nums[right])){
12                ans[k]=nums[left]*nums[left];
13                left++;
14            }
15            else{
16                ans[k]=nums[right]*nums[right];
17                right--;
18            }
19            k--;
20
21
22        }
23
24        return ans;
25        
26    }
27};