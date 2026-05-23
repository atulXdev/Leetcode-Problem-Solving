// Last updated: 23/05/2026, 22:36:00
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m=matrix.size();
5        int n=matrix[0].size();
6        int low=0;
7        int high=m*n-1;
8
9        while(low<=high){
10            int mid=(low+high)/2;
11
12            int row=mid/n;
13            int col=mid%n;
14
15            if(matrix[row][col]==target){
16                return true;
17            }
18
19            else if(matrix[row][col]>target){
20                high=mid-1;
21            }
22            else{
23                low=mid+1;
24            }
25        }
26
27        return false;
28    }
29};