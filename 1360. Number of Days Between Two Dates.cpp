//1360. Number of Days Between Two Dates

class Solution {
public:
    int daysBetweenDates(string date1, string date2) {

        int days1 = calculateDays(date1);
        int days2 = calculateDays(date2);
        
        return abs(days1 - days2);

    }
    
    int calculateDays(string date) {
        
        int year, month, day;
        sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
        
        int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            days_in_month[2] = 29;
        }
        
        int day_number = day;
        for (int i = 1; i < month; ++i) {
            day_number += days_in_month[i];
        }
        
        for (int i = 1970; i < year; ++i) {
            day_number += isLeapYear(i) ? 366 : 365;
        }
        
        return day_number;
    }
    
    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    }
};