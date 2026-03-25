// Last updated: 25/03/2026, 15:17:02
class Solution {
    public int findNumbers(int[] nums) {
        int count=0;
     for(int n:nums){
        int dig=0;
        while(n>0){
            dig++;
            n=n/10;
        }

        if(dig%2==0){
            count++;
        }
     }

     return count;
        
    }
}