class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for (int i{}; i < nums.size(); ++i) {
            if (mp.contains(target-nums[i])) {
                return {mp[target-nums[i]],i};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
