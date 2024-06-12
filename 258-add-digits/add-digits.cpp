class Solution {
public:
    int addDigits(int num) {
if (num<10)
{
    return num;
}
else{
      double sum =10;
    string str="12";
    double r = 0;
    while(sum>9){
        sum=0;
        while (num) {
            r = num % 10;
            num = num / 10;
            sum = sum + r;
        }
      
        num=sum;


    }

        
     
       return sum;

      }
      
    }
};