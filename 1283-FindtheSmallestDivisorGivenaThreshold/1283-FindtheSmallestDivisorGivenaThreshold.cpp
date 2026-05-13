// Last updated: 13/05/2026, 15:54:13
1class Solution {
2public:
3
4int sumByD(vector<int> &arr,int d){
5    int sum=0;
6    for(int i=0;i<arr.size();i++){
7        sum+=ceil((double)arr[i]/d);
8    }
9
10    return sum;
11}
12
13
14    int smallestDivisor(vector<int>& nums, int threshold) {
15
16        int low=1;
17        int maxi=*max_element(nums.begin(),nums.end());
18        int high=maxi;
19
20        while(low<=high){
21            int mid=(high+low)/2;
22
23            if(sumByD(nums,mid)<=threshold){
24                high=mid-1;
25            }
26
27            else{
28                low=mid+1;
29            }
30        }
31
32        return low;
33
34
35        
36    }
37};