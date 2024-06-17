class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0)
        {
            return 0;
        }
        int left=0;
       long long right=sqrt(c);
       
       
        while (left <= right) {
        long sum = left * left + right * right;
        if (sum == c) return true;
        else if (sum > c) right--;
        else left++;
        }
        return false;
        
    }
};