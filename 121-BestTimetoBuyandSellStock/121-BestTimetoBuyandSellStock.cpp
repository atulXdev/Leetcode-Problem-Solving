// Last updated: 24/05/2026, 00:55:31
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4
5        int minP=INT_MAX;
6        int maxProfit=0;
7
8        for(int price:prices){
9            if(price<minP){
10                minP=price;
11            }
12
13            if(price-minP>maxProfit){
14                maxProfit=price-minP;
15            }
16        }
17
18        return maxProfit;
19
20        
21    }
22};