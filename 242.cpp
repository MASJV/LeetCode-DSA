class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> freqS, freqT;

        for (char c : s) {
            freqS[c]++;
        }
        for (char c : t) {
            freqT[c]++;
        }

        for (char c = 'a'; c <= 'z'; c++) {
            if (freqS[c] != freqT[c]) {
                return false;
            }
        }
        return true;
    }
};