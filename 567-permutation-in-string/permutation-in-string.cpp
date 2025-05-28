class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26,0);
              vector<int> hash2(26,0);

              int s1length=s1.size();
               int s2length=s2.size();
               int left=0;
               int right=0;
               if(s1length>s2length)
               {
                return false;
               }


               while(right<s1length)
               {
                hash1[s1[right]-'a']++;
                 hash2[s2[right]-'a']++;
                 right++;

               }
               right--;
               while(right<s2length)
               {
                if(hash1==hash2)
                {
                    return true;
                }
                right++;
              if(right!=s2length)
              {
                   hash2[s2[right]-'a']++;
                   hash2[s2[left]-'a']--;
                   left++;
              }

               }

               return false;

        
    }
};