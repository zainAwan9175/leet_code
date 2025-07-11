class MedianFinder {
public:
priority_queue<int> max_q;
priority_queue<int,vector<int>,greater<int>> min_q;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        max_q.push(num);   
        min_q.push(max_q.top());
        max_q.pop();    
        if(min_q.size()>max_q.size())
        {
            max_q.push(min_q.top());
            min_q.pop();
        }
    }
    
    double findMedian() {
       if(max_q.size()==min_q.size())
       {
        return (min_q.top()+max_q.top())/2.0;
       }else{

        return max_q.top();
       }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */