// Last updated: 25/03/2026, 15:17:23
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> set= new HashSet<>();
        for(int num:nums){
             if(set.contains(num)){
                return true;
            }
            set.add(num);
           
        }
        return false;
    }
}