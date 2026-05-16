// Last updated: 16/05/2026, 17:35:58
1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int low=0;
5        int high=arr.size()-1;
6        while(low<=high){
7           int mid=(high+low)/2;
8           //to get how many missing elemnts before this
9            int missing=arr[mid]-(mid+1);
10            if(missing<k){
11                low=mid+1;
12            }
13            else{
14                high=mid-1;
15            }
16        }
17
18        return k+high+1;
19        
20    }
21};