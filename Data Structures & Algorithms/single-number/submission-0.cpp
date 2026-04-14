class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x{};
        for(auto a : nums) x ^= a;
        return x;
    }
};
