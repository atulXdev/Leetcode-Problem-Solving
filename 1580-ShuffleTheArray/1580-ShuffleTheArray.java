// Last updated: 25/03/2026, 15:16:59
class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] result = new int[2 * n];
        
        for (int i = 0; i < n; i++) {
            result[2 * i] = nums[i];       // x1, x2, x3...
            result[2 * i + 1] = nums[i + n]; // y1, y2, y3...
        }
        
        return result;
    }
}
