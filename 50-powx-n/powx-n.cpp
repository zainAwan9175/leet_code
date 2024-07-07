class Solution {
public:
    double myPow(double x, int n) {

        if(n==0)
        {
            return 1;
        }
       
         if (n < 0) {
            if (n == INT_MIN) {
                // Handle INT_MIN separately
                n = INT_MAX;
                x = 1 / x;
                return myPow(x * x, n / 2);
            } else {
                n = -n;
                x = 1 / x;
            }
        }

        if(n%2==0)
        {
            
            return (myPow(x*x,n/2));
        }else{
            
             return ( x*myPow( x, --n));
        }
      
    }
};