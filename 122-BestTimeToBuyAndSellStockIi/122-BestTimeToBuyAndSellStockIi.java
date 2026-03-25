// Last updated: 25/03/2026, 15:17:38
class Solution {
    public int maxProfit(int[] prices) {
        int max=0;
        for(int i=1;i<prices.length;i++){
            if(prices[i]>prices[i-1]){
                max=max+(prices[i]-prices[i-1]);
            }
        }
        return max;
        
    }
}