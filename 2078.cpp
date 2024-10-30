class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxDist = 0;

        for(int i = 0; i < n - 1; i++) {
            if (colors[n - 1] != colors[i]) {
                maxDist = max(maxDist, n - 1 - i);;
                break;
            }
        }

        for (int j = n - 1; j > 0; j--) {
            if (colors[0] != colors[j]) {
                maxDist = max(maxDist, j);
                break;
            }
        }
        
        return maxDist;
    }
};