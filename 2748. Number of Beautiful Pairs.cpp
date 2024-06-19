//2748. Number of Beautiful Pairs

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        
        int beautiful_pair = 0;

        for(int i=0; i < nums.size()-1; i++)
        {
            for(int j=i+1; j < nums.size(); j++)
            {
                if(calculateGCD(get_first_digit(nums[i]), get_last_digit(nums[j])) == 1)
                    beautiful_pair++;
            }
        }

        return beautiful_pair;
    }

    int get_first_digit(int a)
    {
        int first_digit;

        while(a != 0)
        {
            first_digit = a % 10;
            a /= 10;
        }

        return first_digit;
    }

    int get_last_digit(int b)
    {
        return b % 10;
    }

    int calculateGCD(int a, int b) {
        
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};