class Solution {
public:
    int countPrimes(int n) {
 
       vector<bool> vec(n+1,true);
       vec[0]=vec[1]=false;
       int count=0;
       for(int i=2;i<n;i++)
       {
        if(vec[i])
        {
            count++;
            for(long long j=i*2;j<n;j=j+i)
            {
                vec[j]=false;
            }
        }
       }
return count;
    }
};



// class Solution {
// public:
//     int countPrimes(int n) {
 
//         int count=0;
//         for(int i=2;i<n;i++)
//         {        bool isprime=true;
//             for(int j=2;j<i;j++)
//             {
//                 if(i%j==0)
//                 {
                     
//                     isprime=false;
//                      break;
//                 }
//             }
//             if(isprime)
//             {   
//                 count++;
//             }
//         }
//         return count;
//     }
// };