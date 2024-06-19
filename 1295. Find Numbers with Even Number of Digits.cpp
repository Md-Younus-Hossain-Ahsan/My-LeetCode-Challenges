//1295. Find Numbers with Even Number of Digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count = 0;
        
        for(int i : nums)
        {
            count = (int) (log10(i) + 1) % 2 == 0 ? count + 1 : count;
        }
        
        return count;
    }
};