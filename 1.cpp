class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        vector<int> pair;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]] = i
        }
        
        for(int i=0; i<nums.size(); i++){
            int digit = target - nums[i];

            if(freq.find(digit) != freq.end()){
                if(i != freq[digit]){
                    pair.push_back(i);
                    pair.push_back(freq[digit]);
                    break;
                }
            }
        }
        return pair;
    }
};