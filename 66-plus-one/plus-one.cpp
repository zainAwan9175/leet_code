class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        ans.push_back(1);

        for(int i=digits.size()-1;i>=0;i--)
        {
            digits[i]=digits[i]+1;
            if(digits[i]!=10)
            {
                return digits;
            }
            digits[i]=0;
        }
        if(digits[0]==0)
        {
            for(int i=0;i<digits.size();i++)
            {
                ans.push_back(digits[i]);
            }
        }
        return ans;
    }
};