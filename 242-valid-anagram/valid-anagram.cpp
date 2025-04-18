class Solution {
public:
    bool isAnagram(string s, string t) {
  
map<char,int> st;
  
map<char,int> ss;
if(s.size()!=t.size())
{
    return false;
}
for(int i=0;i<s.size();i++)
{
    st[t[i]]++;
    ss[s[i]]++;

}
if(st==ss)
{
    return true;
}
else{
    return false;
}
        
    }
};