class Solution {
public:
    bool isPowerOfThree(int n) {
        int x=n;
        while(true)
        {
           
            if(x==1)
            {
                return true;
            }
           else if(x<=0)
            {
                return false;
            }
            else if(x%3==0){
                x=x/3;
            }else {
                return false;
            }
        
           
        }
        return false;
        
    }
};