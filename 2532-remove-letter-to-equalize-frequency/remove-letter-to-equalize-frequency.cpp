class Solution {
public:
    bool equalFrequency(string word) {
        map<char,int>mp;
         vector<int>vec;
        for(auto it:word)
        {
            mp[it]++;
        }
       
         for(auto it:mp)
        {
            vec.push_back(it.second);
            
        }
        sort(vec.begin(),vec.end());
      
        if(vec.size()==1&&vec[0]>1)
        {
            return true;
        }
        if(vec[0]==1&&vec[vec.size()-1]==1)
        {
            return true;
        }
       if(vec[0]==vec[vec.size()-1])
       {
        return false;
       }else
       if(vec[0]==(vec[vec.size()-1]-1)&&vec[0]==vec[vec.size()-2])
       {
        return true;
       }
       if(vec[0]==1 &&vec[1]==vec[vec.size()-1])
       {
        return true;
       }
       
        return false;
    }
};