// Last updated: 04/05/2026, 23:31:37
class Solution {
    public int minOperations(int[] nums, int k) {
        int sum = 0;

    for(int i=0; i<nums.length; i++){
        sum = sum  + nums[i];
    }

    return sum%k;
        
    }
}