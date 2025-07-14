class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;
    for(auto it:students)
    {
        q.push(it);
    }
    int i=0;
    int loopcount=0;
    while(loopcount<students.size()&&i<sandwiches.size())
    {
        int n=q.front();
        q.pop();
        if(n==sandwiches[i])
        {
            i++;
            loopcount=0;
        }
        else{
            loopcount++;
            q.push(n);
        }
    }
    return q.size();
    }
};