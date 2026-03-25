// Last updated: 25/03/2026, 15:16:57
class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxwealth =0;
        for(int i =0;i<accounts.length;i++){
            int curwealth =0;

            for(int j=0;j<accounts[i].length;j++){
                curwealth+=accounts[i][j];
            }
            if(curwealth>maxwealth){
                maxwealth = curwealth;
            }
        }return maxwealth;
        
        
    }
}