//504. Base 7

class Solution {
public:
    string convertToBase7(int num) {
        
        string reminders;
        int N = num;
        
        if (N == 0) return "0";

        N = abs(N);

        while (N != 0)
        {
            reminders.push_back((char) (N % 7 + 48));
            N /= 7;
        }
        
        reverse(reminders.begin(), reminders.end());

        
        if (num < 0) 
            return "-" + reminders;

        return reminders;

    }
};