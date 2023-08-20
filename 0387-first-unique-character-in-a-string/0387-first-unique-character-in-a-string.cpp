class Solution {
public:
    int firstUniqChar(string s) {
        int i,ans;
        queue<char> pos;
        unordered_map<char, int> map;
        for(i = 0; i<s.length(); i++){
            map[s[i]]++;
            if(map[s[i]] < 2)pos.push(s[i]);
        }
        for(i = 0; i<s.length(); i++){
            map[s[i]]++;
            if(map[s[i]] == 2){
                return i;
                break;
            }
        }
        return -1;
    }
};