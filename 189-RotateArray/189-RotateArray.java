// Last updated: 25/03/2026, 15:17:26
class Solution { 
    public void rev(int[] nums, int start, int end) {
        while(start <= end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    public void rotate(int[] nums, int k) {
        int n = nums.length;

        // If rotating by n, 2n, 3n... positions: no change
        if(k % n == 0){
            return;
        }

        // Reduce unnecessary rotations
        k = k % n;

        // Reverse method for rotation
        rev(nums, 0, n - 1);
        rev(nums, 0, k - 1);
        rev(nums, k, n - 1);
    }
}
