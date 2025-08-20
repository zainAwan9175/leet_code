class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r)
        {
            if(!isalnum(s[l]))
            {
                l++;
                continue;
            }
            if(!isalnum(s[r]))
            {
                r--;
                continue;
            }

            if(isupper(s[l]))
            {
                s[l]=tolower(s[l]);
            }
              if(isupper(s[r]))
            {
                s[r]=tolower(s[r]);
            }

            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};