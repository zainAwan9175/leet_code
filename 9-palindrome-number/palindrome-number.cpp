class Solution {
public:
    bool isPalindrome(int x) {

        if (x<0)
        {
            return false;
        }
       unsigned int temp=x;
      unsigned  int reverse=0;
        while(temp>0)
        {
            int last=temp%10;
            reverse=reverse*10+last;
            temp=temp/10;
        }
        return reverse==x;
        
    }
};