//1812. Determine Color of a Chessboard Square

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        int col = (int) coordinates[0];
        int row = coordinates[1] - '0';
        
        return (row + col) % 2 == 1;    
        
    }
};