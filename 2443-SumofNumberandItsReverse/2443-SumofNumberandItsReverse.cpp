// Last updated: 14/06/2026, 21:39:17
1class Solution {
2public:
3    bool sumOfNumberAndReverse(int num) {
4        for(int i=0;i<=num;i++){
5            int j=i;
6            int last=0;
7            while(j>0){
8                last = last*10 + j%10;
9                j=j/10;
10            }
11
12            if((last+i)==num){
13                return true;
14            }
15        }
16
17        return false;
18    }
19};