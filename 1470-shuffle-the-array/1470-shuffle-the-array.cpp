class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans; 
        for(int i = 0, k = n; i < n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[k]);
            k++;
        }
        return ans;
    }
};