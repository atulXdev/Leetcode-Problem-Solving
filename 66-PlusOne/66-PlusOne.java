// Last updated: 25/03/2026, 15:17:43
class Solution {
    public int[] plusOne(int[] digits) {
        for(int i=digits.length-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;

            }
            else{
               digits[i]= digits[i]+1;
                return digits;
            }
        }
        int[] res=new int[digits.length+1];
        res[0]=1;
        return res;
        
    }
}