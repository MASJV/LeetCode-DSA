class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;

        while (i < version1.size() || j < version2.size()) {
            string num1, num2;
        
            while (i < version1.size() && version1[i] != '.') {
                num1 += version1[i];
                i++;
            }
            i++;

            while (j < version2.size() && version2[j] != '.') {
                num2 += version2[j];
                j++;
            }
            j++;

            int rev1 = num1.empty() ? 0 : stoi(num1);
            int rev2 = num2.empty() ? 0 : stoi(num2);

            if (rev1 < rev2) {
                return -1;
            }
            if (rev1 > rev2) {
                return 1;
            }
        }
        return 0; 
    }
};