class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int k = 0; k < nums.size(); k++){
                if(nums[i] > nums[k]){
                    count++;
                }
            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};