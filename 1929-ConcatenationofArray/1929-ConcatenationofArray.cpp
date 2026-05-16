// Last updated: 16/05/2026, 13:35:06
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int rowL=accounts.size();
5        int maxWealth=0;
6        for(int i=0;i<rowL;i++){
7            int colL=accounts[i].size();
8            int sum=0;
9            for(int j=0;j<colL;j++){
10                sum+=accounts[i][j];
11
12
13            }
14            maxWealth=max(sum,maxWealth);
15        }
16
17        return maxWealth;
18
19        
20    }
21};