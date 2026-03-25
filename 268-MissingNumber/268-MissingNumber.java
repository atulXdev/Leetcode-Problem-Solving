// Last updated: 25/03/2026, 15:17:19
class Solution {
     
    public int missingNumber(int[] nums) {
       
        int i=0;
        while(i<nums.length){
            int correct=nums[i];
            if(nums[i]<nums.length && nums[i]!=nums[correct]){
                swap(nums,i,correct);
            }
            else{
                i++;
            }

        }
        for(int k=0;k<nums.length;k++){
            if(nums[k]!=k){
                return k;
            }
        }
        return nums.length;
        
    }
    public static void swap(int[] arr,int first,int second){
            int temp=arr[first];
            arr[first]=arr[second];
            arr[second]=temp;
        }
}