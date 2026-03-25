// Last updated: 25/03/2026, 15:17:18
class Solution {
    public int findDuplicate(int[] nums) {
        int slow=0;
        int fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast){
                break;
            }
        }while(slow!=fast);
        //finding the repating num now
        int n1=0;
        int n2=slow;
        while(n1!=n2){
            n1=nums[n1];
            n2=nums[n2];

        }

        return n1;
        
    }
}