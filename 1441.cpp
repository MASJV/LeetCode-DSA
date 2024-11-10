class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string> operations;
        int i = 0;
        int j = 1;

        while(j != target[target.size()-1]){
            if(target[i] == j){
                st.push(j);
                operations.push_back("Push");
                i++;
                j++;
            }

            else{
                j++;
                operations.push_back("Push");
                operations.push_back("Pop");
            }
        }
        
        operations.push_back("Push");
        return operations;

    }
};