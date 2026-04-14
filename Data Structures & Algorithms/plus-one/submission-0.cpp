class Solution {
public:
    vector<int> plusOne(vector<int>& digits) { 
        bool incr{true};
        for (auto a = digits.rbegin(); a != digits.rend(); ++a) {
            if (incr) {
                ++(*a);
                incr = false;
            }
            if (*a == 10) {
                *a = 0;
                incr = true;
            }
        }
        if (incr) {
            vector<int> res{1};
            res.insert(res.end(), digits.begin(), digits.end());
            return res;
        }
        return digits;
    }
};
