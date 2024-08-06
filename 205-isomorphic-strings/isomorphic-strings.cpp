class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        map<char, char> sToT;
        map<char, char> tToS;

        for (int i = 0; i < s.size(); ++i) {
            char sc = s[i];
            char tc = t[i];

            if ((sToT.count(sc) && sToT[sc] != tc) || 
                (tToS.count(tc) && tToS[tc] != sc)) {
                return false;
            }

            sToT[sc] = tc;
            tToS[tc] = sc;
        }

        return true;
    }
};
