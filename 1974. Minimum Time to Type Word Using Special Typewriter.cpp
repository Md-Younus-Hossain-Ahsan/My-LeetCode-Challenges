//1974. Minimum Time to Type Word Using Special Typewriter

class Solution {
public:
    int minTimeToType(string word) {
        
        int time = 0;
        char current = 'a';
        
        for (char target : word) 
        {
            int clockwise = ('z' - current + target - 'a' + 1) % 26;
            int counterclockwise = ('z' - target + current - 'a' + 1) % 26;
            time += min(clockwise, counterclockwise);
            current = target;
        }
        
        return time + word.size(); 
    }
};