//1185. Day of the Week

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        
        static string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if (month < 3) {
            month += 12;
            year--;
        }
        int h = (day + ((month + 1) * 13) / 5 + year % 100 + (year % 100) / 4 + (year / 100) / 4 - 2 * (year / 100) + 77 * (year / 100)) % 7;
        
        return days[(h + 6) % 7]; 
    }
};