class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long one = 0;
        long long two = 0;
        long long three = 0;

        two = num/3;
        one = two-1;
        three = two+1;

        if(one+two+three == num){
            return {one,two,three};
        }
        else{
            return {};
        }
    }
};