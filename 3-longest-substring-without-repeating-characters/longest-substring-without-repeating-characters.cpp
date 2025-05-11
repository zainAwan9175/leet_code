class Solution {
public:
    int lengthOfLongestSubstring(string s) {
 int l=0;
 int r=1;
 int max_string=0;
 string cur="";
 for(int i=0;i<s.size();i++)
 {
    if(cur.find(s[i]) != string::npos)
    {
        int cur_size=cur.size();
        max_string=max(max_string,cur_size);
        cur="";
        int destination=s[i];
        i--;
        while(i>=0)
        {
            if(s[i]==destination)
            {
                i++;
                break;
            }
            i--;
        }
        cur=cur+s[i];
    }
    else{
             cur=cur+s[i];
    }
 }
        int cur_size=cur.size();
        max_string=max(max_string,cur_size);
        return max_string;

        
    }
};