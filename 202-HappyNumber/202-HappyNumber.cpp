// Last updated: 24/05/2026, 23:01:03
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minP=INT_MAX;
5        int maxP=0;
6
7        for(int price:prices){
8            if(price<minP){
9                minP=price;
10            }
11
12            if(price-minP>maxP){
13                maxP=price-minP;
14            }
15        }
16
17        return maxP;
18    }
19};