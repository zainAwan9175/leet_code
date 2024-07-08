class Solution {
public:
    string toLowerCase(string s) {
        string str;
        char c;
        for(int i=0;i<s.size();i++)
        {
            c=s[i];
            if(c>='A'&&c<='Z')
            {
                c=c+32;
            }
            str=str+c;

        }
        
        return str;
    }
};