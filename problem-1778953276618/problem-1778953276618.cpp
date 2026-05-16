// Last updated: 16/05/2026, 23:11:16
1class Solution {
2public:
3    int reverse(int x) {
4
5        int rev=0;
6
7        while(x!=0){
8            int last=x%10;
9
10            //overflow case
11
12            if(rev>INT_MAX/10 || rev<INT_MIN/10){
13                return 0;
14            }
15
16            rev=rev*10+last;
17            x=x/10;
18        }
19        return rev;
20    }
21};