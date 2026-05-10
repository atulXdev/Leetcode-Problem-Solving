// Last updated: 10/05/2026, 22:58:50
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4    sort(nums.begin(),nums.end());
5    int n=nums.size();
6
7    for(int i=0;i<n-1;i++){
8        if(nums[i]==nums[i+1]){
9            return true;
10        }
11
12    }
13
14    return false;
15       
16    }
17};