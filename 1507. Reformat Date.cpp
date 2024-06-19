//1507. Reformat Date

class Solution {
public:
    string reformatDate(string date) {
        
        int len = date.size();
        int i = (len == 12) ? 4 : 5;
        
        string day = len == 12 ? string(1, '0') + string(1, date[0]) : date.substr(0, 2);
        
        string month = date.substr(i, 3);
        
        string year = date.substr(i + 4, 4);
        
        return year + "-" + getMonth(month) + "-" + day;
    }
    
    string getMonth(string month) {
        
        if(month == "Jan") return "01";
        if(month == "Feb") return "02";
        if(month == "Mar") return "03";
        if(month == "Apr") return "04";
        if(month == "May") return "05";
        if(month == "Jun") return "06";
        if(month == "Jul") return "07";
        if(month == "Aug") return "08";
        if(month == "Sep") return "09";
        if(month == "Oct") return "10";
        if(month == "Nov") return "11";
        if(month == "Dec") return "12";
        
        return "";        
    }
};