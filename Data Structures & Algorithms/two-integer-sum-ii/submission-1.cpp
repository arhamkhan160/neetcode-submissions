class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l, h;
        l=0;
        h= numbers.size()-1;
        while(l<=h)
        {
            int t =numbers[l]+ numbers[h];
            if(t==target)
            {
                return {l+1, h+1};
            }
            if(t>target)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
        return {};
    }
};
