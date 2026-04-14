class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> s;
        for (auto a : nums) {
            if (s.contains(a)) return true;
            s.insert(a);
        }
        return false;
    }
};