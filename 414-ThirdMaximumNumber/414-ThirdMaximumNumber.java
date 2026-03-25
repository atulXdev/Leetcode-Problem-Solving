// Last updated: 25/03/2026, 15:17:13
class Solution {
    public int thirdMax(int[] nums) {
        TreeSet<Integer> set= new TreeSet<>();
        //Treeset store data of set sorted manner asending
        for(int n:nums){
            set.add(n);
            if(set.size()>3){
                set.pollFirst(); //removing the smallest numbered encountered so that we get only 3 or less than 3 number
            }
        }

        return set.size()==3?set.first():set.last();
        
    }
}