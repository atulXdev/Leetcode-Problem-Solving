// Last updated: 25/03/2026, 15:17:11
class Solution {
    public boolean palinhelper(int i,int j,String s){
        while(i<j){
            if(s.charAt(i)!=s.charAt(j)){
                return false;
            }
            i=i+1;
            j=j-1;
        }
        return true;
    }
    public boolean validPalindrome(String s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            char left=s.charAt(i);
            char right=s.charAt(j);
            if(left!=right){
                return palinhelper(i+1,j,s) || palinhelper(i,j-1,s);

            }
            else{
                i=i+1;
                j=j-1;
            }
        }
        return true;

        
    }
}