// Last updated: 25/03/2026, 15:17:58
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> map= new HashMap<>();

        for(int i=0;i<nums.length;i=i+1){
           int lookingfor=target-nums[i];
           if(map.containsKey(lookingfor)){
            return new int[] {
                i,
                map.get(lookingfor)
            };
           }

           map.put(nums[i],i);
        }

        return new int[]{
            -1-1
        };
        
    }
}