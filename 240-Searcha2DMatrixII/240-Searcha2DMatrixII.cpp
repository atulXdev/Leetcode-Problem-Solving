// Last updated: 24/05/2026, 00:36:47
1class Solution {
2public:
3 bool bs(vector<int>& arr,int aim){
4    int low=0;
5    int n=arr.size();
6    int high=n-1;
7
8    while(low<=high){
9        int mid=(low+high)/2;
10
11        if(arr[mid]==aim){
12            return true;
13        }
14
15        else if(arr[mid]>aim){
16            high=mid-1;
17        }
18
19        else{
20            low=mid+1;
21        }
22    }
23
24    return false;
25
26   }
27    bool searchMatrix(vector<vector<int>>& matrix, int target) {
28        int m=matrix.size();
29
30        for(int i=0;i<m;i++){
31            bool ans=bs(matrix[i],target);
32            if(ans){
33                return true;
34            }
35        }
36
37        return false;
38        
39    }
40};