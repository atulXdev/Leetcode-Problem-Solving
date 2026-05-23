// Last updated: 24/05/2026, 00:22:38
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m=matrix.size();
5        int n=matrix[0].size();
6
7        int low=0;
8        int high=m*n-1;
9
10        while(low<=high){
11            int mid=(low+high)/2;
12
13            int row=mid/n;
14            int col=mid%n;
15
16            if(matrix[row][col]==target){
17                return true;
18            }
19
20            else if(matrix[row][col]<target){
21                low=mid+1;
22            }
23
24            else{
25                high=mid-1;
26            }
27        }
28
29        return false;
30        
31    }
32};