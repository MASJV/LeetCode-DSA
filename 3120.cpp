class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> special;
        unordered_set<char> lower;
        unordered_set<char> upper;

        
        for (char c : word) {
            if (islower(c)) {
                lower.insert(c);
                if (upper.find(toupper(c)) != upper.end()) {
                    special.insert(c);
                }
            } 
            
            else{
                upper.insert(c);
                if (lower.find(tolower(c)) != lower.end()) {
                    special.insert(tolower(c));
                }
            }
        }
        return special.size();
    }
};