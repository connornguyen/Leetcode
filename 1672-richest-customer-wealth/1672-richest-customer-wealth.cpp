class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximumWealth = 0, sum = 0; 
        vector<int> afterSum;
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[i].size(); j++){
                sum = accounts[i][j] + sum;
            }
            afterSum.push_back(sum);
            sum = 0;
        }
        return *max_element(afterSum.begin(), afterSum.end());
    }
};