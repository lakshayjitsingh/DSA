class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        long long product = 1;
        vector<int> ans(nums.size());

        // Calculate product of all non-zero elements
        for (int num : nums) {
            if (num == 0)
                zeroCount++;
            else
                product *= num;
        }

        // Build answer
        for (int i = 0; i < nums.size(); i++) {

            if (zeroCount > 1) {
                ans[i] = 0;
            }

            else if (zeroCount == 1) {
                if (nums[i] == 0)
                    ans[i] = product;
                else
                    ans[i] = 0;
            }

            else {
                ans[i] = product / nums[i];
            }
        }

        return ans;
    }
};