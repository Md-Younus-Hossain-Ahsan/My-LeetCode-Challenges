//1040. Moving Stones Until Consecutive II

#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> numMovesStonesII(vector<int>& stones) 
    {
        
        sort(stones.begin(), stones.end());
        int n = stones.size();
        
        int max_moves = max(stones[n - 1] - stones[1] - n + 2, stones[n - 2] - stones[0] - n + 2);
        
        int min_moves = n;
        int left = 0;

        for (int right = 0; right < n; ++right) 
        {
            while (stones[right] - stones[left] >= n) 
            {
                ++left;
            }

            if (right - left + 1 == n - 1 && stones[right] - stones[left] == n - 2) {
                min_moves = std::min(min_moves, 2);
            } else {
                min_moves = std::min(min_moves, n - (right - left + 1));
            }
        }
        
        return {min_moves, max_moves};
        
    }
};