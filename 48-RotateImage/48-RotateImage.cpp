// Last updated: 04/05/2026, 23:35:52
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4
5        int n=matrix.size();
6
7        //transpose
8
9        for(int i=0;i<n-1;i++){
10            for(int j=i+1;j<n;j++){
11                swap(matrix[i][j],matrix[j][i]);
12            }
13        }
14
15        //reverse the row
16
17        for(int i=0;i<n;i++){
18            reverse(matrix[i].begin(),matrix[i].end());
19        }
20
21        
22    }
23};