// Last updated: 28/05/2026, 17:58:39
1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) {
4
5        int maxPdt=INT_MIN;
6        int minPdt=INT_MAX;
7        int maxPdtDiff=0;
8
9        for(int i=0;i<nums.size();i++){
10
11            for(int j=i+1;j<nums.size();j++){
12                long long pdt=nums[i]*nums[j];
13
14                if(pdt>maxPdt){
15                    maxPdt=pdt;
16                }
17
18                if(pdt<minPdt){
19                    minPdt=pdt;
20                }
21            }
22            maxPdtDiff=max(maxPdtDiff,maxPdt-minPdt);
23        }
24
25        return maxPdtDiff;
26
27        
28    }
29};