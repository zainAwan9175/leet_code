class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1)
        {
            return INT_MAX;
        }
         if(dividend==INT_MIN&&divisor==1)
        {
            return INT_MIN;
        }
     long int dd=abs(dividend);
     long int dv=abs(divisor);
     int res=0;
     long int sum=0;
     long int count=0;
        while(dd>=dv)
        {
            sum=dv;
            count=1;
            while(sum<=dd-sum)
            {
              sum+=sum;
                count=count+count;
            }
            res=res+count;
            dd=dd-sum;


        }

        if(dividend>0&&divisor<0||dividend<0&&divisor>0)
        {
            return -res;
        }
        return res;
        
    }
};