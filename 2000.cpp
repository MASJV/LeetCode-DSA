class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> letters;
        bool found = false;

        for (int i = 0; i < word.length(); i++) {
            letters.push(word[i]);
            if (word[i] == ch && !found) {
                found = true;
                break;
            }
        }

        if(found) {
            string reversed;
            while(!letters.empty()) {
                reversed += letters.top();
                letters.pop();
            }
            return reversed + word.substr(reversed.size());
        }

        return word;
    }
};