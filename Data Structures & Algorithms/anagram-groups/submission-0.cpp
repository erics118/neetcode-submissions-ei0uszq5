class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;

        for (auto const& s : strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            if (m.contains(sorted)) m[sorted].push_back(s);
            else m[sorted] = {s};
        }
        vector<vector<string>> res;
        for (auto const& [k, v] : m) {
            res.push_back(v);
        }
        return res;
    }
};
