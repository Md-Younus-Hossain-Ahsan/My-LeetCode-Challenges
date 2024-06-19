//1154. Day of the Year

class Solution {
public:
    int dayOfYear(string date) {

        int year, month, day;
        sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
        
        vector<int> days_in_month = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            days_in_month[2] = 29;
        }
        
        int day_number = 0;
        for (int i = 1; i < month; ++i) {
            day_number += days_in_month[i];
        }
        day_number += day;
        
        return day_number;
        
    }
};