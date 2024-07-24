class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> vec(n);
        int a=0;
        int b=0;
        int c=0;
        vec[0]=1;
        for(int i=1;i<vec.size();i++)
        {
            int num=min({vec[a]*2,vec[b]*3,vec[c]*5});
             vec[i]=num;
             if(vec[a]*2==num)
             {
                a++;
             }
             if(vec[b]*3==num)
             {
                b++;
             }
              if(vec[c]*5==num)
             {
                c++;
             }
        }
        return vec[n-1];
        
    }
};