class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
          sort(intervals.begin(), intervals.end());
        for(auto it:intervals)
        {
            if(vec.empty()||vec.back()[1]<it[0])
            {
                vec.push_back(it);
            }
            else{
                vec.back()[1]=max(vec.back()[1],it[1]);
                
            }
        }
        return vec;
    }
};