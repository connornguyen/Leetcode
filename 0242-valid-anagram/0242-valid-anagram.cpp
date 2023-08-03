class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;
        int n = s.length();
        for(int i = 0; i < n; i++){
            map[s[i]]++;
        }
        for(int i = 0; i < n; i++){
            map[t[i]]--;
        }
        for(int i = 0; i < n; i++){
            if(map[s[i]] != 0)
                return false;
        }
        return n == t.length();
        return true;
    }
};


