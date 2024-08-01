class Solution {
public:
    int thirdMax(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    set<int>st;
    for(auto it:nums)
    {
        st.insert(it);
    }
     for(auto it:st)
    {
       nums.push_back(it);
    }
    if(nums.size()<3)
    {
        return nums[nums.size()-1];
    }
    else{
            return nums[nums.size()-1-2];

    }
        return 0;
    }
};