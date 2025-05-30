class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        unordered_map<char, int> mp;
        for (char c : t) {
            mp[c]++;
        }

        int count = t.size(); // Number of characters we need to match
        int left = 0, right = 0;
        int minLen = INT_MAX;
        int start = 0;

        while (right < s.size()) {
            // If s[right] is needed
            if (mp[s[right]] > 0) {
                count--;
            }

            mp[s[right]]--; // Always decrement
            right++;

            // When all characters are matched
            while (count == 0) {
                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }

                // Shrink from left
                mp[s[left]]++;
                if (mp[s[left]] > 0) {
                    count++; // We need this character again
                }
                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
