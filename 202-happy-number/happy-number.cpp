class Solution {
public:
int getnext(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum=sum+(digit*digit);
        n=n/10;
    }
return sum;

}
    bool isHappy(int n) {
        int fast=getnext(n);
        int slow=n;

        while(fast!=1&&fast!=slow)
       {
          slow=getnext(slow);
          fast=getnext(getnext(fast));
       }

       return fast==1;
    }
};