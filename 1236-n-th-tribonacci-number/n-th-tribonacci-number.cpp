class Solution {
public:
    int tribonacci(int n) {
        int first=0;
       int second=1;
       int thrd=1;
        int forth=0;
        if(n==0)
        {
            return 0;
        }else if(n==1)
    
    {
        return 1;
    }

    else if(n==2)
    {
        return 1;
    }
    
        for(int i=3;i<=n;i++)
        {
            forth=first+second+thrd;
            first=second;
            second=thrd;
            thrd=forth;

        }
        return forth;
    }
};