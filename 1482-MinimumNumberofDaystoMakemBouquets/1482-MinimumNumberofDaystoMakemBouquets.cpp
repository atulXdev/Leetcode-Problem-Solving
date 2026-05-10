// Last updated: 10/05/2026, 16:25:58
1//bruteforce 
2class Solution {
3public:
4
5bool possible(vector<int>& arr,int day,int m,int k){
6    int noOfBloom=0;
7    int count=0;
8    int n=arr.size();
9
10    for(int i=0;i<n;i++){
11        
12        //count will increase till we get consicutive no of days of blooming
13        //when we incounter non blooming day count=0 then compute noOfbloom then
14        //start looking for next consecutive
15        if(arr[i]<=day){
16            count++;
17        }
18
19        else{
20            noOfBloom+=count/k;
21            count=0;
22        }
23    }
24
25    //agar koi non blooming mila hi nhe tvi compute hoga.At last final compute
26    noOfBloom+=count/k;
27
28  return noOfBloom>=m;
29}
30
31int minDays(vector<int>& bloomDay, int m, int k) {
32
33    //if total flowers required is greater than available flowers
34    if((long long)m*k > bloomDay.size()){
35        return -1;
36    }
37   
38   int mini=INT_MAX;
39   int maxi=INT_MIN;
40   for(int i=0;i<bloomDay.size();i++){
41    mini=min(bloomDay[i],mini);
42    maxi=max(bloomDay[i],maxi);
43   }
44
45  int low=mini;
46  int high=maxi;
47
48  while(low<=high){
49    int mid=(low+high)/2;
50
51    if(possible(bloomDay,mid,m,k)){
52        high=mid-1;
53    }
54    else{
55        low=mid+1;
56    }
57  }
58
59  return low;
60        
61    }
62};