class Solution {
public:
    string convertDateToBinary(string date) {
        int year = std::stoi(date.substr(0, 4));
        int month = std::stoi(date.substr(5, 2));
        int day = std::stoi(date.substr(8, 2));
    
        string binaryYear = bitset<12>(year).to_string();
        binaryYear = binaryYear.substr(binaryYear.find('1'));
    
        string binaryMonth = bitset<4>(month).to_string();
        binaryMonth = binaryMonth.substr(binaryMonth.find('1'));
    
        string binaryDay = bitset<5>(day).to_string();
        binaryDay = binaryDay.substr(binaryDay.find('1'));
    
        return binaryYear + "-" + binaryMonth + "-" + binaryDay;
    }
};