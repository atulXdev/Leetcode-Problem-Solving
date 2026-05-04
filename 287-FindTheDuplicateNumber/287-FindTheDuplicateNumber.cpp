// Last updated: 04/05/2026, 23:32:01
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int num:nums){
            if(seen.count(num)){
                return num;
            }
            seen.insert(num);
        }

        return -1;
        
    }
};