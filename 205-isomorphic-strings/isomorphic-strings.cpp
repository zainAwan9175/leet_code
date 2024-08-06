class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> sTOt;
             map<char,char> tTOs;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            char sc=s[i];
            char tc=t[i];
            if(sTOt.count(sc)&&sTOt[sc]!=tc || tTOs.count(tc)&&tTOs[tc]!=sc)
            {
            return false;
            }
            sTOt[sc]=tc;
            tTOs[tc]=sc;

        }
        return true;
    }
};