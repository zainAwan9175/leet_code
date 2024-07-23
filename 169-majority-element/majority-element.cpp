class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int>st;
        for(int i=0;i<nums.size();i++)
        {
            st[nums[i]]++;
        }

        for(auto it:st)
        {
            if(it.second>n)
            {
                return it.first;
            }
        }
        return 0;
        
    }
};