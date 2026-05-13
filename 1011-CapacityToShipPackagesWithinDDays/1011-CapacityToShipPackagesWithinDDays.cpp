// Last updated: 13/05/2026, 17:12:27
1class Solution {
2public:
3  int findDays(vector<int> arr,int cap){
4    int days=1,load=0;
5    for(int i=0;i<arr.size();i++){
6
7        if(arr[i]+load>cap){
8            days+=1;
9            load=arr[i];
10        }
11
12        else{
13            load+=arr[i];
14        }
15    }
16
17    return days;
18  }
19    int shipWithinDays(vector<int>& weights, int days) {
20
21        int low=*max_element(weights.begin(),weights.end());
22        int high=accumulate(weights.begin(),weights.end(),0);
23
24        while(low<=high){
25            int mid=(low+high)/2;
26
27            int noOfdays=findDays(weights,mid);
28
29            if(noOfdays<=days){
30                high=mid-1;
31            }
32
33            else{
34                low=mid+1;
35            }
36        }
37
38        return low;
39
40        
41    }
42};