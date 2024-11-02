class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        int vowel = 0;
        int consonant = 0;

        if(n<3){
            return false;
        }
        for(int i=0; i<n; i++){
            if (!isdigit(word[i]) && !isalpha(word[i])) {
                return false;
            }
    
            if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || 
                tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || 
                tolower(word[i]) == 'u') {
                vowel++;
            } 

            else if (isalpha(word[i])) {
                consonant++;
            }
        }
        
        if (vowel > 0 && consonant > 0) {
            return true;
        }
        return false;
    }
};