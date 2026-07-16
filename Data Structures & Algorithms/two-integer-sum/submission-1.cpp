class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size= nums.size();
        unordered_map<int, int> map;
        vector<int> answer;
        for(int i=0;i<size;i++)
        {
            map[nums[i]]=i;
        }
        int difference;
        for(int i=0;i<size;i++)
        {
            difference = target-nums[i];
            if(map[difference]>0 && map[difference]!=i)
            {
                answer.push_back(i);
                answer.push_back(map[difference]);
                return answer;
            }
        }
    }
};
