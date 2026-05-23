// Last updated: 24/05/2026, 00:39:32
1class Solution {
2public:
3
4bool bs(vector<int> & arr,int target){
5    int n=arr.size();
6    int low=0;
7    int high=n-1;
8
9    while(low<=high){
10        int mid=(low+high)/2;
11
12        if(arr[mid]==target){
13            return true;
14        }
15
16        else if(arr[mid]>target){
17            high=mid-1;
18        }
19        else{
20            low=mid+1;
21        }
22    }
23
24    return false;
25}
26    bool searchMatrix(vector<vector<int>>& matrix, int target) {
27
28        int m=matrix.size();
29
30        for(int i=0;i<m;i++){
31            bool ans=bs(matrix[i],target);
32
33            if(ans){
34                return true;
35            }
36        }
37
38        return false;
39        
40    }
41};