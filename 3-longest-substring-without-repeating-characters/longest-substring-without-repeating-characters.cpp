class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int ans=0;
        set<char> vec;
       while(left<s.size()&&right<s.size())
       {
        if(vec.count(s[right]))
        {
            while(vec.count(s[right]))
            {
                vec.erase(s[left]);
                left++;
            }
              vec.insert(s[right]);
        }
        else{
            vec.insert(s[right]);
            int n=vec.size();
            ans=max(ans,n);
        }
        right++;
       }
        return ans;
        
    }
};