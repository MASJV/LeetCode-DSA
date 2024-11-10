class Solution {
public:
    int integerReplacement(int n) {
        int count = 0;
        long num = n;

        while(num != 1){
            if(num % 2 == 0){
                num/=2;
            }

            else{
                if(num == 3 || ((num - 1) / 2) % 2 == 0) {  // for cases like num = 7
                    num -= 1;
                } 

                else {
                    num += 1;
                }
            }
            count++;
        }
        return count;
    }
};