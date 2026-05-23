// Last updated: 23/05/2026, 21:17:25
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minP=INT_MAX;
5        int max=0;
6
7        for(int price:prices){
8            if(price<minP){
9                minP=price;
10            }
11
12            if(price-minP>max){
13                max=price-minP;
14            }
15        }
16
17        return max;
18        
19    }
20};