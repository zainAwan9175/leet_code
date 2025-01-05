class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int currentheight=0;
        int maximumheight=0;


        for(int i=0;i<gain.size();i++)
        {
            currentheight=currentheight+gain[i];
            maximumheight=max(maximumheight,currentheight);

            

        }

        return maximumheight;
    
    }
};