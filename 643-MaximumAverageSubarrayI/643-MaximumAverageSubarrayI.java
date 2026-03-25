// Last updated: 25/03/2026, 15:17:12
class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum=0;
        double max=Double.NEGATIVE_INFINITY;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        max=Math.max(sum,max);

        for(int i=k;i<nums.length;i++){
            //expanding the window
            sum=sum+nums[i];
            //contracting window from left
            sum=sum-nums[i-k];

            max=Math.max(sum,max);
        }

        return max/k;
        
    }
}