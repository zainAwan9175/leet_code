class Solution {
public:
    bool isCircularSentence(string sentence) {
        int l=sentence.size();
        if(sentence[0]!=sentence[l-1])
        {
            return false;
        }
        char pre;
        char nex;
       for(int i=0;i<l;i++)
       {
        if(sentence[i]==' '&& pre!=sentence[i+1])
        {
            return false;
        }
        pre=sentence[i];
        
       }
        return true;
    }
};