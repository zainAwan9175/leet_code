class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs[0].size();
        int count=0;
       
        for(int i=0;i<n;i++)
        {
             string s="";
           for(int j=0;j<strs.size();j++)
           {
               s=s+strs[j][i];
           }
           bool issort=true;
           for(int k=1;k<s.size();k++)
           {
              if(!(s[k]>=s[k-1]))
              {
                issort=false;
                break;
              }
                
              

           }
           if(issort==false)
           {
            count++;
           }
        }
        return count;
    }
};