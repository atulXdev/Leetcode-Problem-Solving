// Last updated: 19/05/2026, 20:27:39
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4
5        int left = 0;
6        int right = height.size()-1;
7
8        int maxi = 0;
9
10        while(left < right){
11
12            int h = min(height[left], height[right]);
13
14            int w = right - left;
15
16            int area = h * w;
17
18            maxi = max(maxi, area);
19
20            if(height[left] < height[right]){
21                left++;
22            }
23            else{
24                right--;
25            }
26        }
27
28        return maxi;
29    }
30};