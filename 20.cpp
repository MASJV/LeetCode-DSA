class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s){
            if(c == '(' || c == '[' || c=='{'){
                st.push(c);
            }
            else if(st.empty()){
                return false;
            }
            else{
                char check = st.top();
                if((check=='(' && c ==')') || (check=='[' && c==']') || 
                    (check=='{' && c=='}')){
                    st.pop();
                }
                else{
                    cout<<"hi"<<endl;
                    return false;
                }
            }
        }
        return st.empty();
    }   
};