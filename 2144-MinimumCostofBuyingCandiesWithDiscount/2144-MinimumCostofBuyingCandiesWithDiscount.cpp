// Last updated: 01/06/2026, 22:06:59
1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4        
5        sort(cost.begin(),cost.end());
6        int ans=0;
7int n=cost.size();
8while(n>0){
9    if(n>=2){
10        ans+=cost[n-1];
11        ans+=cost[n-2];
12        //skipping free candy
13        n=n-3;
14    }
15    else{
16        ans+=cost[n-1];
17        n--;
18    }
19}
20
21return ans;
22    }
23};