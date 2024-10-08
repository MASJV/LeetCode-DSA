#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
        return 1;
        }
        if(n==1){
            return x;
        }
        double y = myPow(x,n/2);
        if (n % 2 == 0) {
            return y * y;
        }
        else if (n > 0) {
            return x * y * y;
        }
        else {
            return (1 / x) * y * y;
        }
    }
};