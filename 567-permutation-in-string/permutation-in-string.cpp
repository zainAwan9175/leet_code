class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       sort(s1.begin(),s1.end());

int n=s1.size();
int right=0;
string str="";
for(int i=0;i<s2.size();i++)
{
  
    str=str+s2[i];
      if(str.size()>n)
    {
       str.erase(str.begin()); 
    }
    if(str.size()==n)
    {
      string temp = str;
                sort(temp.begin(), temp.end());
                if (temp == s1) {
                    return true;
                }
    }
   
}
return false;
        
    }
};