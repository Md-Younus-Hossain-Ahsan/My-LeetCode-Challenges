//2591. Distribute Money to Maximum Children

class Solution {
public:
    int distMoney(int money, int children) {
        
        money -= children; //Each child gets at least $1 initially

        if (money < 0) 
            return -1;

        int maxEights = min(children, money / 7);
        int remainder = money - maxEights * 7;

        if (maxEights == children && remainder > 0)
            maxEights--;
        else if (maxEights == children - 1 && remainder == 3)
            maxEights--;

        return maxEights;
    }
};