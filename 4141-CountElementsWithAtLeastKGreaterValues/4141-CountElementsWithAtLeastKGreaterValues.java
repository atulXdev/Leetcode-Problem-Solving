// Last updated: 25/03/2026, 15:16:51
import java.util.*;

class Solution {
    public int countElements(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int j = i;
            while (j + 1 < n && nums[j + 1] == nums[i]) j++;
            int greater = n - 1 - j;
            if (greater >= k) count += (j - i + 1);
            i = j;
        }

        return count;
    }
}