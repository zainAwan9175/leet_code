class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
       
        for(int i=0;i<m;i++)
        {
            arr.push_back(nums1[i]);
        }
         for(auto it:nums2)
        {
            arr.push_back(it);
        }
            sort(arr.begin(),arr.end());
       nums1.clear();
        for(auto it:arr)
        {
            nums1.push_back(it);
            
        }
      
    
        
    }
};