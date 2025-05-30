class Solution {
public:
    string minWindow(string s, string t) {
        int count = t.size();
        unordered_map<char, int> mp;
        
        for (char c : t) {
            mp[c]++;
        }

        int l = 0, r = 0;
        int min_l = INT_MAX;
        int start = 0;

        while (r < s.size()) {
            if (mp[s[r]] > 0) {
                count--;
            }
            mp[s[r]]--;

            while (count == 0) {
                if ((r - l + 1) < min_l) {
                    min_l = r - l + 1;
                    start = l; // ⬅️ Store the starting index
                }

                mp[s[l]]++;
                if (mp[s[l]] > 0) {
                    count++;
                }
                l++;
            }

            r++;
        }

        return min_l == INT_MAX ? "" : s.substr(start, min_l);
    }
};
