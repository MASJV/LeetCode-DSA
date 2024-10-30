class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int count = 0;
            string s = to_string(num);
            for(char c:s){
                int digit = c - '0';
                count+=digit;
            }
            num = count;
        }
        return num;
    }
};