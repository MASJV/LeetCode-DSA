class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zero++;
            }
            else if(nums[i] == 1){
                one++;
            }
            else{
                two++;
            }
        }

        for(int j=0; j<nums.size(); j++){
            if (zero > 0) {
                nums[j] = 0;
                zero--;
            } 
            else if (one > 0) {
                nums[j] = 1;
                one--;
            } 
            else {
                nums[j] = 2;
                two--;
            }
        }
    }
};