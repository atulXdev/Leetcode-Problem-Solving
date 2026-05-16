// Last updated: 16/05/2026, 13:57:46
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int n=candies.size();
5         vector<bool> ans(n,0);
6
7         for(int i=0;i<n;i++){
8            candies[i]+=extraCandies;
9            int maxi=*max_element(candies.begin(),candies.end());
10            if(candies[i]==maxi){
11                ans[i]=true;
12            }
13            else{
14                ans[i]=false;
15            }
16            candies[i]-=extraCandies;
17         }
18
19         return ans;
20
21
22        
23    }
24};