class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        unordered_map<char, int> tMap;
        for (char c : t) tMap[c]++;  

        int left = 0, minLen = INT_MAX, start = 0;
        int required = tMap.size();  
        int formed = 0;             

        unordered_map<char, int> windowCounts;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            windowCounts[c]++;

            if (tMap.count(c) && windowCounts[c] == tMap[c]) {
                formed++;
            }

            
            while (left <= right && formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

               
                char l = s[left];
                windowCounts[l]--;
                if (tMap.count(l) && windowCounts[l] < tMap[l]) {
                    formed--;
                }

                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
