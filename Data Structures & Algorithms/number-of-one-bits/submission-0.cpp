class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a{};
        while (n > 0) {
            if (n % 2 == 1) ++a;
            n /= 2;
        }
        return a;
    }
};
