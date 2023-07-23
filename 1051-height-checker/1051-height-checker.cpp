class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp;
        int k = 0;
        temp = heights;
        sort(heights.begin(), heights.end());
        for(int i = 0; i < heights.size(); i++){
            if(temp[i] != heights[i])
                k++;
        }
        return k;

    }
};