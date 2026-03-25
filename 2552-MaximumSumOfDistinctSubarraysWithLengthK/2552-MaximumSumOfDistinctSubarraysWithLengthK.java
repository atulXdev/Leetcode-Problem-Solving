// Last updated: 25/03/2026, 15:16:49
class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        long sum=0;
        long max=0;
        int dups=0;
        Map<Integer,Integer> map=new HashMap<>();
        int n=nums.length;
        for(int i=0;i<k;i++){
            if(!map.containsKey(nums[i])){
                map.put(nums[i],0);
            }
            map.put(nums[i],map.get(nums[i])+1);
            sum=sum+nums[i];
            if(map.get(nums[i])>1){
                dups=dups+1;
            }

        }
         if(dups==0){
                max=Math.max(sum,max);
                }

                for(int i=k;i<n;i++){
                    int numsAdd=nums[i];
                    int numsRemove=nums[i-k];

                    if(!map.containsKey(nums[i])){
                        map.put(nums[i],0);
                    }

                    map.put(nums[i],map.get(nums[i])+1);
                    if(map.get(numsAdd)>1){
                        dups=dups+1;
                    }

                    sum=sum+numsAdd;
                    if(map.get(numsRemove)>1){
                        dups=dups-1;
                    }
                    map.put(numsRemove,map.get(numsRemove)-1);
                    sum=sum-numsRemove;

                    if(dups==0){
                        max=Math.max(max,sum);
                    }
                }

                return max;
        
    }
}