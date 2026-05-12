// Last updated: 12/05/2026, 11:16:39
1class Solution {
2public:
3    int fib(int n) {
4
5        if(n<=1){
6            return n;
7        }
8
9        return fib(n-1)+fib(n-2);
10        
11    }
12};