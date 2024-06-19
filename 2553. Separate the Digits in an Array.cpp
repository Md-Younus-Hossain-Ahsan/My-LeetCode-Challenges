//2553. Separate the Digits in an Array

class Solution {
public:
    vector<int> digits;

    vector<int> separateDigits(vector<int>& nums) {
        
        for(int i=0; i < nums.size(); i++)
        {
            digitSeparator(nums[i]);
        }

        return digits;
    }

    void digitSeparator(int n)
    {
        stack<int> storage;

        while(n != 0)
        {
            storage.push(n % 10);
            n /= 10;
        }

        while(!storage.empty())
        {
            digits.push_back(storage.top());
            storage.pop();
        }
    }
};