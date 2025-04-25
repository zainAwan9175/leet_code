class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        set<int>st;
          for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        vector<int>vec(0,st.size());

      for(auto it=st.begin();it!=st.end();it++)
{
  vec.push_back(*it);
}      

 int count=1;
int ans=1;
//  for(int i=0;i<vec.size();i++)
//  {
//     cout<<vec[i];
//  }
        for( int i=1;i<vec.size();i++)
        {
            if((vec[i]-1)==vec[i-1]) 
            {
                ans++;
                count=max(count,ans);
            }else{
               ans=1;
            }
        }
        return count;
    }
};