// Last updated: 25/03/2026, 15:17:03
class Solution {
    public int tribonacci(int n) {
         if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        
        int t0=0;
        int t1=1;
        int t2=1;
        int t3=0;
        
        
        for(int i=3;i<=n;i++){
            t3=t2 + t1 + t0;
           t0=t1;
           t1=t2;
           t2=t3;
        }
        //t4=t3+t2+t1
        return t3;
    }
}