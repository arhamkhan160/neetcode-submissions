class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> h;
        vector<vector<int>> u;
        int target;
        for(int i=0;i<nums.size();i++)
        {
            h[nums[i]]++;
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++)
        {
            h[nums[i]]--;
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<nums.size();j++)
            {
                h[nums[j]]--;
                if(j>i+1 && nums[j]==nums[j-1])
                {
                    continue;
                }
                target= -(nums[i]+nums[j]);
                if(h[target]>0)
                {
                    u.push_back({nums[i], nums[j], target});
                }
            }
            for(int j= i+1; j< nums.size();j++)
            {
                h[nums[j]]++;
            }
        }
        return u;
    }
};
