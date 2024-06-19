//1103. Distribute Candies to People

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> distribution(num_people, 0);
        int rounds = 0;
        
        while (candies > 0) {
            for (int i = 0; i < num_people; ++i) {
                int candies_given = min(candies, rounds * num_people + i + 1);
                distribution[i] += candies_given;
                candies -= candies_given;
                if (candies <= 0)
                    break;
            }
            rounds++;
        }
        
        return distribution;
        
    }
};