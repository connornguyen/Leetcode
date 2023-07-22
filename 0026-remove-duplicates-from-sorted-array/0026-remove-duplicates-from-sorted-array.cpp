class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0; 
    if (nums.size() == 0){
        return k;
    
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != nums[k]){
            k++;
            nums[k] = nums[i];
       }
   }
    return k+1;
    }
};