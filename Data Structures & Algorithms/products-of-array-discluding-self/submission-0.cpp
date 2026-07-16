class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, zero = 0;

        for (int x : nums) {
            if (x == 0)
                zero++;
            else
                product *= x;
        }

        vector<int> ans(nums.size());

        if (zero > 1)
            return ans;

        for (int i = 0; i < nums.size(); i++) {
            if (zero == 1)
                ans[i] = (nums[i] == 0) ? product : 0;
            else
                ans[i] = product / nums[i];
        }

        return ans;
    }
};