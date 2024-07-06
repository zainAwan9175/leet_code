class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> mp;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j])
                {
                    mp[list2[j]]=(i+j);
                }
            }
        }
        vector<string> vec;
int min =INT_MAX;
        for(auto it:mp)
        {
            if(it.second<=min)
            {
                min=it.second;
            }
        }
        for(auto it:mp)
        {
            if(it.second==min)
            {
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};