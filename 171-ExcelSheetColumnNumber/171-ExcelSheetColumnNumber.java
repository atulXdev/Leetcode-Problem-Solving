// Last updated: 25/03/2026, 15:17:29
class Solution {
    public int titleToNumber(String columnTitle) {
        int result=0;
        for(int i=0;i<columnTitle.length();i++){
           char ch=columnTitle.charAt(i);
           result=result*26+(ch-'A'+1);
        }

        return result;
    }
}