// Last updated: 29/05/2026, 00:45:18
1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) {
4        long long maxPdt=INT_MIN;
5        long long minPdt=INT_MAX;
6        long long maxpdtdiff=0;
7
8        for(int i=0;i<nums.size();i++){
9            long long pdt=0;
10
11            for(int j=i+1;j<nums.size();j++){
12                pdt=nums[i]*nums[j];
13
14                if(pdt>maxPdt){
15                    maxPdt=pdt;
16                }
17                if(pdt<minPdt){
18                    minPdt=pdt;
19                }
20            }
21
22
23        }
24
25        
26            maxpdtdiff=max(maxpdtdiff,maxPdt-minPdt);
27
28            return maxpdtdiff;
29        
30    }
31};