// Last updated: 25/03/2026, 15:17:36
class Solution {
    public int singleNumber(int[] nums) {
        //using XOR;
        int ans=0;
        for(int num:nums){
            ans=ans^num;
        }

        return ans;
        
    }
}