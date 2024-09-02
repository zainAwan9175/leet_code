class Solution {
public:
vector<int> ans;
    vector<int> numberOfLines(vector<int>& widths, string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<widths.size();i++)
        {
                mp['a' + i] = widths[i];
        }
int sum=0;
int lines=1;
       for(int i=0;i<s.size();i++)
       {
        sum=sum+mp[s[i]];
        if(sum>100)
        {
            sum=0;
            lines++;
            i--;
            
        }
       }
       ans.push_back(lines);
          ans.push_back(sum);

        return ans;
    }
};