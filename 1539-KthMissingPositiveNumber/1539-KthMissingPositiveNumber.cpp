// Last updated: 16/05/2026, 17:04:19
1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        for (int i=0;i<arr.size();i++){
5            if(arr[i]<=k){
6                k++;
7            }
8            else{
9                break;
10            }
11        }
12
13        return k;
14        
15    }
16};