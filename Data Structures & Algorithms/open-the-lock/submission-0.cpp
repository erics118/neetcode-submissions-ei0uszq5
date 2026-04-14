class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());

        if (dead.contains("0000")) return -1;

        if (target == "0000") return 0;

        queue<pair<string, int>> q;
        unordered_set<string> visited;

        q.emplace("0000", 0);
        visited.insert("0000");

        while (!q.empty()) {
            auto [state, steps] = q.front();
            q.pop();

            for (auto next : neighbors(state)) {
                if (dead.contains(next) || visited.contains(next)) continue;

                if (next == target) return steps+1;

                visited.insert(next);
                q.emplace(next, steps+1);
            }
        }
        return -1;
    }

    char shift(char c, int n) {
        return (c - '0' + 10 + n) % 10 + '0';
    }

    vector<string> neighbors (string s) {
        vector<string> res;

        for (int i = 0; i < 4; ++i) {
            auto up = s, down =s;
            up[i] = shift(s[i], 1);
            down[i] = shift(s[i], -1);
            res.push_back(up);
            res.push_back(down); 
        }
        return res;
    }
};