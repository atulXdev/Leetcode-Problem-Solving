// Last updated: 25/03/2026, 15:17:14
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set1= new HashSet<>();
        for(int num:nums1){
            set1.add(num);
        }

        Set<Integer> result = new HashSet<>();
        for(int num:nums2){
            if(set1.contains(num)){
                result.add(num);
            }
        }
        //saving the result in array
        int[] resarr=new int[result.size()];
        int index=0;
        for(int num:result){
            resarr[index++]=num;
        }

        return resarr;
    }
}