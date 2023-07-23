class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sodu = 1, sodem = 0;
        for(int k = digits.size()-1 ; k >= 0 ;k--){
            if(digits[k] == 9){
                sodem = sodem +1;
            }
            digits[k] = digits[k] + sodu; 
            if(digits[k] != 10){
                return digits; 
            }
            else {
                digits[k] = 0;
            }

        }
        digits.clear();
        digits.push_back(1);
        for(int a = sodem; a > 0; a--){
            digits.push_back(0);
        }
        return digits;
    }
};