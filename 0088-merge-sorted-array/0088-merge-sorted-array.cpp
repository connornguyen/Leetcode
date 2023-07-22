
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k;
        if(nums1.size()== 0 || nums2.size() == 0){
            return;
        } 

        for(int i =0;i < n ;i++){
            nums1.pop_back();
        }

        for(int i =0;i < n; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
    }
};