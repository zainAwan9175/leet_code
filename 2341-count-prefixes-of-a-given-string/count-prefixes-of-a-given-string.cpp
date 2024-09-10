class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {

            string comp=words[i];
            if(comp.size()<=s.size())
            {
             bool prefix=false;
            for(int j=0;j<words[i].size();j++)
            {
                if(comp[j]==s[j])
                {
                    prefix=true;
                }
                else
                {
                    prefix=false;
                    break;
                }

            }
            if(prefix)
            {
                count++;
            }

            }
           
        }
        return count;
        
    }
};