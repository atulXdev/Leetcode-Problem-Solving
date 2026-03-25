// Last updated: 25/03/2026, 15:17:05
class Solution {
    public int fib(int n) {
        if(n<=1){
            return n;
        }
        return fib(n-1) + fib(n-2);
        
    }
}