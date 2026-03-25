// Last updated: 25/03/2026, 15:17:15
class Solution {
    public void reverseString(char[] s) {
        int i=0;
        int j=s.length-1;
        while(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;

            i=i+1;
            j=j-1;
        }
        
    }
}