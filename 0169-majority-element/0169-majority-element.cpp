class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        int max,count = 0;
        for(int i = 0; i < nums.size(); i++){
            if (count < map[nums[i]]){
                max = nums[i];
                count = map[nums[i]];
            }
        }
        return max;
    }
};