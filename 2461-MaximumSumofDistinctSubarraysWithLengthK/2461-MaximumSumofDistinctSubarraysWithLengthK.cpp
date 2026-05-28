// Last updated: 28/05/2026, 23:59:08
1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        int left=0;
5        unordered_map<int,int> mp;
6        long long sum=0;
7        long long ans=0;
8
9        for(int right=0;right<nums.size();right++){
10            sum+=nums[right];
11            mp[nums[right]]++;
12
13            if(right-left+1>k){
14                sum-=nums[left];
15                mp[nums[left]]--;
16                if(mp[nums[left]]==0) mp.erase(nums[left]);
17                left++;
18            }
19
20            if(right-left+1==k && mp.size()==k){
21                ans=max(ans,sum);
22            }
23        }
24
25        return ans;
26        
27    }
28};