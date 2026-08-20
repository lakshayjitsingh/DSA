class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];
        int currentMax = nums[0], maxSum = nums[0];
        int currentMin = nums[0], minSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            currentMax = max(nums[i], currentMax + nums[i]);
            maxSum = max(maxSum, currentMax);
            currentMin = min(nums[i], currentMin + nums[i]);
            minSum = min(minSum, currentMin);
            total += nums[i];
        }
        if (maxSum < 0)
            return maxSum;
        return max(maxSum, total - minSum);
    }
};