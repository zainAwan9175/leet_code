class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      vector<int> ans;
      vector<int> st;
      for(int i=0;i<arr1.size();i++)
      {
        if(!count(arr2.begin(),arr2.end(),arr1[i]))
        {
            st.push_back(arr1[i]);
        }
                 
      }
      
      sort(st.begin(),st.end());
    
      for(int i=0;i<arr2.size();i++)
      {
        for(int j=0;j<arr1.size();j++)
        {
            if(arr1[j]==arr2[i])
            {
              ans.push_back(arr1[j]);
            }
        }
      }

 for(auto it:st)
 {
    ans.push_back(it);
 }

return ans;

    }
};