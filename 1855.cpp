class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int dist = 0;
        for(int i=0;i<nums1.size();++i){
            for(int j=dist+i;j<nums2.size();++j){
                if(nums1[i]<=nums2[j]){
                    if(j-i>dist){
                        dist = j-i;
                    }
                }
                else{
                    break;
                }
            }
        }
        return dist;
    }
};