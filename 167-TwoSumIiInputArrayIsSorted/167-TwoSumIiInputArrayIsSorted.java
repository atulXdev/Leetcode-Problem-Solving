// Last updated: 25/03/2026, 15:17:31
class Solution {
    public int[] twoSum(int[] numbers, int target) {

        int i=0;
        int j=numbers.length-1;

        while(i<j){
            int sum=numbers[i] + numbers[j];

            if(sum<target){
                i=i+1;
            }
            else if(sum>target){
                j=j-1;
            }

            else{

                return new int[]{
                    i+1,
                    j+1
                };
            }

            
        }
        return new int[] {
                -1,-1
            };
        
    }
}