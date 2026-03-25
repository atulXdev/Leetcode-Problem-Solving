// Last updated: 25/03/2026, 15:17:47
class Solution {
    public int removeElement(int[] nums, int val) {

        int k = 0; // pointer for placing non-val elements
        
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; 
                k++;
            }
        }
        
        return k; 
    }
}