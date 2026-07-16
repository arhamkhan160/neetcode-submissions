class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size= s.length();
        int t_size= t.length();
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        if(s_size== t_size)
        {
            for(int i=0;i<s_size;i++)
            {
                map1[s[i]]+=1;
                map2[t[i]]+=1;
            }
            if(map1==map2)
            {
                return true;
            }
        }
        return false;
    }
};
