//1041. Robot Bounded In Circle

class Solution {
public:
    bool isRobotBounded(string instructions) {

        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        
        int x = 0, y = 0, direction = 0;
        
        for (char instruction : instructions) 
        {
            if (instruction == 'G') {
                x += dx[direction];
                y += dy[direction];
            } else if (instruction == 'L') {
                direction = (direction + 3) % 4;
            } else if (instruction == 'R') {
                direction = (direction + 1) % 4;
            }
        }
        
        return (x == 0 && y == 0) || direction != 0;

    }
};