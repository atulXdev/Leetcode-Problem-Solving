// Last updated: 07/05/2026, 12:20:17
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        //minimum element may or may not be in sorted part
5        //just take the sorted part and simply update the ans with least element of sorted part
6        //now we dont care about sorted part now move to other part and do the same;
7        int ans=INT_MAX;
8        int n=nums.size();
9        int low=0;
10        int high=n-1;
11
12        while(low<=high){
13            int mid=(low+high)/2;
14
15            //if left half is sorted
16            if(nums[low]<=nums[mid]){
17                ans=min(ans,nums[low]);
18
19                //now checking right half
20                low=mid+1;
21            }
22            //if right half is sorted
23            else{
24                ans=min(ans,nums[mid]);
25
26                //check the left half
27                high=mid-1;
28            }
29
30        }
31
32        return ans;
33
34    }
35};