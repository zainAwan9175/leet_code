class Solution {
public:
    bool isPalindrome(string s) {
        int r=s.size()-1;
        int l=0;
     while(l<r)
     {
       
          if(s[l]>=65&&s[l]<=90)
          {
              s[l]=s[l]+32;
          }
          if(s[r]>=65&&s[r]<=90)
          {
              s[r]=s[r]+32;
          }
           if(!(s[l]>=97&&s[l]<=122)&&!(s[l]>=48&&s[l]<=57))
           {
                 l++;
                 continue;
           }
              if(!(s[r]>=97&&s[r]<=122)&&!(s[r]>=48&&s[r]<=57))
           {
                 r--;
                 continue;
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