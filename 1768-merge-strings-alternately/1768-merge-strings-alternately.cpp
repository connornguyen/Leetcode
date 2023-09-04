class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int cur, n;
        if(word1.length() > word2.length()) n = word1.length();
        else n = word2.length();
        string ans;
        for(int i = 0; i < n; ++i){
            if(i < word1.length())ans += word1[i];
            if(i < word2.length())ans += word2[i];
        }
        return ans;
    }
};