class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> st;
        int n=0;

        for(auto it:nums)
        {
            st.insert(it);
        }
        int i=0;
         for(auto it:st)
        {
           nums[i]=it;
           i++;
        }
        return i;
    }
};