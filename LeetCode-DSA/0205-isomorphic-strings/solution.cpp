class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map;
        unordered_map<char, char> map2;
        int n1 = s.size();
        int n2 = t.size();
        if (n1 != n2)
            return false;
        for (int i = 0; i < n1; i++) {

            if (map.count(s[i]) && map[s[i]] != t[i])
                return false;

            if (map2.count(t[i]) && map2[t[i]] != s[i])
                return false;
            map[s[i]] = t[i];
            map2[t[i]] = s[i];
        }
        return true;
    }
};
