class Solution {
public:
    int fib(int n) {
        if (n==0)
        {
            return 0;
        }else if(n==1)
        {
            return 1;
        }
        int f=0;
        int s=1;
        int t;
        for(int i=1;i<=n;i++)
        {t=f+s;
        f=s;
        s=t;

        }
        return f;
        
    }
};