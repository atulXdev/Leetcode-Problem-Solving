// Last updated: 13/06/2026, 10:21:02
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int sum=0;
5        while(n>0){
6            int last=n%10;
7            sum+=last;
8            n=n/10;
9        }
10
11        return sum;
12        
13    }
14};