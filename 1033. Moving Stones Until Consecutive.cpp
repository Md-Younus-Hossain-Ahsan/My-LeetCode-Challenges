//1033. Moving Stones Until Consecutive

class Solution {
public:
    std::vector<int> numMovesStones(int a, int b, int c) {

        vector<int> stones = {a, b, c};
        sort(stones.begin(), stones.end());
        
        int min_moves = 2;
        if (stones[2] - stones[1] == 1 && stones[1] - stones[0] == 1)
            min_moves = 0;
        else if (stones[2] - stones[1] <= 2 || stones[1] - stones[0] <= 2)
            min_moves = 1;
        
        int max_moves = stones[2] - stones[0] - 2;
        
        return {min_moves, max_moves};

    }
};