// Last updated: 23/05/2026, 22:20:34
1class Solution {
2public:
3   
4   bool bs(vector<int>& arr,int aim){
5    int low=0;
6    int n=arr.size();
7    int high=n-1;
8
9    while(low<=high){
10        int mid=(low+high)/2;
11
12        if(arr[mid]==aim){
13            return true;
14        }
15
16        else if(arr[mid]>aim){
17            high=mid-1;
18        }
19
20        else{
21            low=mid+1;
22        }
23    }
24
25    return false;
26
27   }
28    bool searchMatrix(vector<vector<int>>& matrix, int target) {
29        int m=matrix.size();
30        
31        for(int i=0;i<m;i++){
32            bool ans=bs(matrix[i],target);
33            if(ans==true){
34                return true;
35            }
36        }
37
38        return false;
39    }
40};