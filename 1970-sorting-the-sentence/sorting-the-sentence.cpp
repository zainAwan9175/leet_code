class Solution {
public:
    string sortSentence(string s) {
        string str="";
        map<int,string>  mp;
    for(auto it:s)
    {
        
        if(it==' ')
        {
            continue;
        }else
        if(!isdigit(it))
        {
           str=str+it;
        }else{
               mp[it]=str;
               str="";
        }
      
        
    }
    str="";
        for(auto it:mp)
        {
            str=str+it.second;
            str=str+' ';
        }
        str.pop_back();

    
        return str;
    }
};