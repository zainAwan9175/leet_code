class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>arr;
      set<int> st;
       for(auto it:nums)
       {
       st.insert(it);
       }
       for(int i=1;i<=nums.size();i++)
       {
        if(!st.count(i))
        {
            arr.push_back(i);
        }
       }
        return arr;
    }
};