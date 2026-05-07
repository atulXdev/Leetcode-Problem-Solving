// Last updated: 07/05/2026, 17:00:27
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int n=nums.size();
5        //handeling all edge cases
6        if(n==1){
7            return nums[0];
8        }
9       if(nums[0]!=nums[1]){
10        return nums[0];
11       } 
12       if(nums[n-1]!=nums[n-2]){
13        return nums[n-1];
14       }
15       int low=1;
16       int high=n-2;
17
18       while(low<=high){
19        int mid=(low+high)/2;
20        //uniq element when left and right are not eqaul
21        if(nums[mid]!=nums[mid+1]&& nums[mid]!=nums[mid-1] ){
22            return nums[mid];
23        }
24        //if on left half (even,odd) trim the left half
25        if((mid%2==0 && nums[mid]==nums[mid+1])||(mid%2==1 && nums[mid]==nums[mid-1])){
26            //trim the left half
27            low=mid+1;
28        }
29        //else you are in right half trim the right half
30        else{
31            high=mid-1;
32        }
33       }
34
35       return -1;
36       
37    }
38};