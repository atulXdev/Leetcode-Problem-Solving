// Last updated: 14/06/2026, 21:38:51
1class Solution {
2public:
3    bool sumOfNumberAndReverse(int num) {
4        if(num==0) return true;
5        for(int i=1;i<=num;i++){
6            int j=i;
7            int last=0;
8            while(j>0){
9                last = last*10 + j%10;
10                j=j/10;
11            }
12
13            if((last+i)==num){
14                return true;
15            }
16        }
17
18        return false;
19    }
20};