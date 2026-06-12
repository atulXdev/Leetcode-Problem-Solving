// Last updated: 12/06/2026, 23:31:50
1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        int maxi=*max_element(nums.begin(),nums.end());
5        int index;
6
7        for(int i=0;i<nums.size();i++){
8            if(nums[i]==maxi){
9                index=i;
10                continue;
11                
12            }
13            if(!(nums[i]*2<=maxi)){
14                return -1;
15            }
16        }
17
18        return index;
19        
20    }
21};