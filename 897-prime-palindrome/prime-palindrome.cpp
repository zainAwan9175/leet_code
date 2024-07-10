class Solution {
public:




  bool isprime(int n){
        // if(n%2 == 0) return false;
        for(int i = 2; i <= pow(n, 0.5); i++){
            if(n%i == 0) return false;
        }
        return true;
    }


    bool ispalindrome(int x) {
        if (x < 0) {
            return false;
        }
        unsigned int temp = x;
        unsigned int reverse = 0;
        while (temp > 0) {
            int last = temp % 10;
            reverse = reverse * 10 + last;
            temp = temp / 10;
        }
        return reverse == x;
    }

    
    int primePalindrome(int n) {
    
        if(n==1||n==2)
        {
            return 2;
        }
        if (n%2==0)
        {
         n++;
        }
        while (true) {
            bool prime = isprime(n);
            bool palindrome = ispalindrome(n);

            if (prime && palindrome) {
                return n;
            }
            n=n+2;
          if(n > 1e7 && n < 1e8) n = 1e8 + 1;
            if(n > 1e5 && n < 1e6) n = 1e6 + 1;
            if(n > 1e3 && n < 1e4) n = 1e4 + 1;
            if(n > 11 && n < 100) n = 101;
           
        }
    }
};