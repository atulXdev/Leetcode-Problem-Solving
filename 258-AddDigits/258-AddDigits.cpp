// Last updated: 12/05/2026, 23:49:32
1class Solution {
2public:
3    int addDigits(int num) {
4
5        while(num>=10){
6            int sum=0;
7
8            while(num>0){
9                int last=num%10;
10                sum+=last;
11                num=num/10;
12            }
13
14            num=sum;
15        }
16
17        return num;
18        
19    }
20};