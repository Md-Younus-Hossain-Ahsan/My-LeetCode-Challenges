//2859. Sum of Values at Indices With K Set Bits

class Solution {
public:
    int sumIndicesWithKSetBits(std::vector<int>& nums, int k) {
        
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (countSetBits(i) == k) {
                sum += nums[i];
            }
        }
        return sum;
    }

private:
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
};