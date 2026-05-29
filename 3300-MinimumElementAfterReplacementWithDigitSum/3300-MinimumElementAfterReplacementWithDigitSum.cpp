// Last updated: 29/05/2026, 23:09:15
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4        int mini=INT_MAX;
5        
6
7        for(int i=0;i<nums.size();i++){
8            int digiSum=0;
9
10            while(nums[i]>0){
11                int last=nums[i]%10;
12                digiSum+=last;
13                nums[i]=nums[i]/10;
14            }
15
16            mini=min(mini,digiSum);
17
18
19        }
20
21        return mini;
22        
23    }
24};