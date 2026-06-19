// Last updated: 19/06/2026, 09:51:19
1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int sum=0;
5        int maxi=0;
6
7        for(int i=0;i<gain.size();i++){
8            sum+=gain[i];
9            maxi=max(sum,maxi);
10        }
11
12        return maxi;
13        
14    }
15};