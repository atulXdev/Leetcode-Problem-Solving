// Last updated: 09/05/2026, 14:47:46
1class Solution {
2public:
3 //finding the max banana piles
4        int maxpile(vector<int>& v){
5            int maxi=INT_MIN;
6            int n=v.size();
7            for(int i=0;i<n;i++){
8               maxi=max(maxi,v[i]);
9            }
10
11            return maxi;
12        }
13
14          //for each mid elemnt : eg is our banana/hour counting total no of hours
15        //its taking for total array traversal
16        //for example we get mid as 6 means 6 banana per hours so we will calculate
17        //total hours according to this 6 banana per hour
18
19        long long countTotalHours(vector<int> &v,int hourly){
20            int n=v.size();
21            long long totalH=0;
22            for(int i=0;i<n;i++){
23                totalH+=ceil((double)v[i]/(double)hourly);
24            }
25            return totalH;
26        }
27
28    int minEatingSpeed(vector<int>& piles, int h) {
29       
30      
31        int low=1;
32        int high=maxpile(piles);
33
34        while(low<=high){
35            int mid=(low+high)/2;
36            long long totalH=countTotalHours(piles,mid);
37
38            if(totalH<=h){
39                high=mid-1; //there is possibilty of getting more lower
40            }
41     //increse to more banana so that on div we get smaller hour so that total hour come smaller
42            else{
43                low=mid+1;
44            }
45        }
46
47        return low;
48        
49    }
50};