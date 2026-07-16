class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.length()-1;
        for(int i=0; i<s.length(); i++)
        {
            space_checker:
                if(i>=j)                     
                {
                    return true;
                }
                if(!isalnum(s[i]))         
                {
                    i++;
                    goto space_checker;
                }
                if(!isalnum(s[j]))
                {
                    j--;
                    goto space_checker;
                }
                if(tolower(s[i]) != tolower(s[j]))
                {
                    return false;
                }
                j--;
        }
        return true;
    }
};