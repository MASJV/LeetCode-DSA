class Solution {
public:
    string clearDigits(string s) {
        stack<char> entities;

        for(char c : s){
            if(isdigit(c)){
                if(!isdigit(entities.top()) && !entities.empty()) {
                    entities.pop();
                }
            }
            else{
                entities.push(c);
            }
        }
        
        string result;
        while(!entities.empty()){
            result += entities.top();
            entities.pop();
        }

        reverse(result.begin(), result.end());
        return result;
     }
};