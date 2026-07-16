class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                x+=tolower(s[i]);
            }
        }
        return x == string(x.rbegin(), x.rend());
    }
};