class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highaltitude=0;
        int sum=0;
        for(int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            highaltitude=max(highaltitude,sum);
        }
        return highaltitude;
    }
};