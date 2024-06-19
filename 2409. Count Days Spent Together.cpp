//2409. Count Days Spent Together

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        int last_arrived = max(findDays(arriveAlice), findDays(arriveBob));
        int first_left = min(findDays(leaveAlice), findDays(leaveBob));
        int days_of_living_together = first_left - last_arrived + 1;
        
        return days_of_living_together < 0 ? 0 : days_of_living_together;
    }
    
    int findDays(string s) {
        
        int days_count[11] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334}; 
        //{31, 31+28, 31+28+31, 31+28+31+30, 31+28+31+30+31, 31+28+31+30+31+30, 31+28+31+30+31+30+31, 31+28+31+30+31+30+31+31, 31+28+31+30+31+30+31+31+30, 31+28+31+30+31+30+31+31+30+31, 31+28+31+30+31+30+31+31+30+31+30}
        
        int month = (s[0] - '0') * 10 + (s[1] - '0');
        int date = (s[3] - '0') * 10 + (s[4] - '0');
        int days = month == 1 ? date : days_count[month-2] + date; 
        
        return days;
    }
};