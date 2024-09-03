class Solution {
public:
    int reverse(int x) {
        string s = to_string(abs(x));
        ::reverse(s.begin(),s.end());
        long long result = stoll(s);

        if(x>0){
            if (result > INT_MAX || result < INT_MIN) {
                return 0;
            }
            return result;
        }
        if(x<0){
            if (result > INT_MAX || result < INT_MIN) {
                return 0;
            }
            return -result;
        }
        else{
            return 0;
        }
    }
};