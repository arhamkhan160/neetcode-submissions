class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> ex_li;
        int remain;
        vector<int> result;
        for(int i=0;i<numbers.size();i++)
        {
            ex_li[numbers[i]]=i+1;
        }
        for(int i=0;i<numbers.size();i++)
        {
            remain= target- numbers[i];
            if(ex_li[remain]!=0)
            {
                result.push_back(i+1);
                result.push_back(ex_li[remain]);
                return result;
            }
        }
        return result;
    }
};
