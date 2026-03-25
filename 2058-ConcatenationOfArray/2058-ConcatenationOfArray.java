// Last updated: 25/03/2026, 15:16:54
class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int[] ans = new int[2 * n]; // Create array of size 2n

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];       // First half
            ans[i + n] = nums[i];   // Second half
        }

        return ans; // Return the concatenated array
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {1, 2, 1}; // Example input
        int[] result = sol.getConcatenation(nums); // Call the method

        // Print the output array
        System.out.print("Output: [");
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i]);
            if (i < result.length - 1) System.out.print(", ");
        }
        System.out.println("]");
    }
}
