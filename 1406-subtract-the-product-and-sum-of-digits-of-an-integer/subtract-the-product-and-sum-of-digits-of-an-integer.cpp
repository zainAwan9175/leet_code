class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n;
        int p=1;
        while(num>0)
        
        {
            int last=num%10;
            p=p*last;
            num=num/10;
        }
        
        int s=0;
        num=n;
        while(num>0)
        
        {
            int last=num%10;
            s=s+last;
            num=num/10;
        }
       int maxi=max(s,p);
       int mini=min(s,p);
        return p-s;
    }
};