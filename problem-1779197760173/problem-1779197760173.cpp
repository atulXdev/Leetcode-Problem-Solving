// Last updated: 19/05/2026, 19:06:00
1class Solution {
2public:
3    int mySqrt(int x) {
4        if(x==0 || x==1){
5            return x;
6        }
7        int ans=1;
8
9        int low=1;
10        int high=x;
11
12        while(low<=high){
13            long long mid=low+(high-low)/2;
14            if(mid*mid<=x){
15                ans=mid;
16                low=mid+1;
17            }
18            else{
19                high=mid-1;
20            }
21        }
22
23        return ans;
24        
25    }
26};