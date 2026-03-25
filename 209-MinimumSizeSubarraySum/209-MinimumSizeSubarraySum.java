// Last updated: 25/03/2026, 15:17:24
class Solution {
    public int minSubArrayLen(int target, int[] nums) {
       //sliding window
       int i=0;
       int j=0;
        int sum=0;
        int size=Integer.MAX_VALUE;
        while(j<nums.length){
            sum=sum+nums[j];
            while(sum>=target){
                size=Math.min(size,j-i+1);
                //contacting wind0w chota kr rhe h when we get pur desired
                sum=sum-nums[i];
                i=i+1;

            }
            j=j+1;
        }

        return size==Integer.MAX_VALUE?0:size;
        
    }
}