class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int k = 0,a = 0;
        for(int i = 0; i < s.length(); i++){
            for(int k = a; k < t.length(); k++){
                if(s[i] == t[k]){
                    count++;
                    a = k + 1;
                    break;
                }
            }
        }
        if(count == s.length())
            return true;
        return false;
    }
    
};


