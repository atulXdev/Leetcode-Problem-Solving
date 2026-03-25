// Last updated: 25/03/2026, 15:17:51

class Solution {
    public void twoSumHelper(int f, int[] nums, List<List<Integer>> res) {
        int i = f + 1,
            j = nums.length - 1;
        // [-1, -1, 0, 0, 1, 1]
        //.  f
        //.            i
        //                j
        // sum = 0
        // [[-1, 0, 1], [-1, 0, 1]]
        while (i < j) {
            int sum = nums[f] + nums[i] + nums[j];
            if (sum > 0) {
                j = j - 1;
            } else if (sum < 0) {
                i = i + 1;
            } else {
                // found a triplet
                // [-1, -1, 0, 0, 0, 0, 1, 1, 1, 1]
                //.                     f
                //.                        i
                //                               j
                // sum = 1
                // [[-1, 0, 1], [0, 0, 0]]
                res.add(Arrays.asList(nums[f], nums[i], nums[j])); // nums[f], nums[i], nums[j]
                i = i + 1;
                j = j - 1;
                while (i < j && nums[i] == nums[i - 1]) {
                    i = i + 1;
                }
                while (i < j && nums[j] == nums[j + 1]) {
                    j = j - 1;
                }
            }
        }
    }
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        // T: O(n.logn + n^2)
        // S: O(logn)
        // [-1, -1, 0, 0, 1, 1]
        //.  f
        // []
        List<List<Integer>> res = new ArrayList<>();
        for (int f = 0; f < nums.length; f = f + 1) {
            if (nums[f] > 0) {
                break;
            }
            if (f == 0 || nums[f] != nums[f - 1]) {
                 twoSumHelper(f, nums, res);
            }
        }
        return res;
    }
}