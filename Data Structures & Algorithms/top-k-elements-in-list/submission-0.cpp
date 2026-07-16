class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        vector<pair<int,int>> arr;
        for(const auto&p : count)
        {
            arr.push_back({p.second, p.first});
        }
        sort(arr.begin(), arr.end());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[arr.size()-i-1].second);
        }
        return ans;
    }
};
