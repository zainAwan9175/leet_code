class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        stack<int> st;

        for(auto  it:nums)
        {
            if(st.empty())
            {
                st.push(it);

            }
            else if(st.top()==it)
            {
                  st.pop();
            }
            else
            st.push(it);
           
        }

       
        return st.top();
    }
};