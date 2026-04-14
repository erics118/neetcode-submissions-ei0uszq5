class Solution {
    map<char,int> toMap(string s) {
        map<char,int> mp;
        for (char c : s) {
            if (mp.contains(c)) ++mp[c];
            else mp.insert({c, 0});
        }
        return mp;
    }
public:
    bool isAnagram(string s, string t) {
        auto a = toMap(s);
        auto b = toMap(t);
        for (auto const& [k,v] : a) {
            if (!b.contains(k)) return false;
            if (b[k] != v) return false;
        }
        for (auto const& [k,v] : b) {
            if (!a.contains(k)) return false;
            if (a[k] != v) return false;
        }
        
        return true;
    }
};
