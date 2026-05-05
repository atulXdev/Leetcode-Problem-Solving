// Last updated: 05/05/2026, 16:02:18
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4       int m=matrix.size();
5       int n=matrix[0].size();
6       int left=0;
7       int right=n-1;
8       int top=0;
9       int bottom=m-1;
10
11       vector<int> ans;
12
13       while(top<=bottom && left<=right){
14        //left to right
15
16        for(int i=left;i<=right;i++){
17            ans.push_back(matrix[top][i]);
18        }
19        top++;
20        //top to bottom
21        for(int i=top;i<=bottom;i++){
22            ans.push_back(matrix[i][right]);
23        }
24        right--;
25if (top<=bottom){
26        //in bottom left to right
27        for(int i=right;i>=left;i--){
28            ans.push_back(matrix[bottom][i]);
29        }
30        bottom--;
31}
32        //bottom to top
33        if(left<=right){
34
35        for(int i=bottom;i>=top;i--){
36            ans.push_back(matrix[i][left]);
37        }
38
39        left++;
40
41       }}
42
43       return ans;
44        
45    }
46};