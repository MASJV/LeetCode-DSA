class Solution {
public:
    int numberOfChild(int n, int k) {
        int position = 0;
        bool right = true;

        for (int i = 0; i < k; i++) {
            if(right) {
                position++;
                if(position == n - 1) {
                    right = false;
                }
            } 
            else {
                position--;
                if(position == 0) {
                    right = true;
                }
            }
        }
        return position;
    }
};