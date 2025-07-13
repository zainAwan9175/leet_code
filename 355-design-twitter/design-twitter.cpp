class Twitter {
public:
unordered_map<int,vector<pair<int,int>>> tweet;
unordered_map<int ,set<int>> followers;

int time;
    Twitter() {
         time=0;
        
    }
    
    void postTweet(int userId, int tweetId) {
        time++;
        pair <int,int> p={time,tweetId};
        tweet[userId].push_back(p);
        
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> pq;
        vector<int> res;
        if(tweet.find(userId)!=tweet.end())
        {
            for(auto it:tweet[userId])
            {
                pq.push(it);

            }
        }
        for(auto id:followers[userId])
        {
                 if(tweet.find(id)!=tweet.end())
        {
            for(auto it:tweet[id])
            {
                pq.push(it);

            }
        }
       
        }
         for(int i=0;i<10&&!pq.empty();i++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
          return res;
    }
    
    void follow(int followerId, int followeeId) {
        followers[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
     followers[followerId].erase(followeeId);   
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */