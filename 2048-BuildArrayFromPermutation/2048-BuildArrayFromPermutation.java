// Last updated: 25/03/2026, 15:16:56
class Solution {
    public int[] buildArray(int[] nums) {
        int[] ans = new int[nums.length]; // Create ans array of same length

        for (int i = 0; i < nums.length; i++) {
            ans[i] = nums[nums[i]]; // Apply the transformation
        }

        return ans; // Return the result
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {0, 2, 1, 5, 3, 4}; // Example input
        int[] result = sol.buildArray(nums); // Call the method

        // Print the output array
        System.out.print("Output: [");
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i]);
            if (i < result.length - 1) System.out.print(", ");
        }
        System.out.println("]");
    }
}
