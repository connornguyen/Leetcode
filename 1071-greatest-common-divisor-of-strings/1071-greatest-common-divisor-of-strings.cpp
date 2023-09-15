class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)return "";
        int minLength = min(str1.length(), str2.length());
        string prefix = "";

        for (int i = 0; i < minLength; ++i) {
            if (str1[i] == str2[i]) {
            prefix += str1[i];
            } else {
                break;
            }
        }

        string ans = prefix.substr(0, gcd(size(str1),size(str2)));

        return ans;
    }
};