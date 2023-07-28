class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);

        int rightSum = 0;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] = rightSum;
            rightSum += nums[i];
        }

        int leftSum = 0;
        for (int i = 0; i < n; i++) {
            answer[i] = abs(answer[i] - leftSum);
            leftSum += nums[i];
        }

        return answer;
    }
};