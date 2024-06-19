//1678. Goal Parser Interpretation

class Solution {
public:
    string interpret(string command) {
        
        string interpretation;

        for (int i = 0; i < command.size(); ++i) 
        {
            if (command[i] == 'G')
            {
                interpretation += 'G';
            }
            else if (command[i] == '(' && command[i + 1] == ')') 
            {
                interpretation += 'o';
                ++i; 
            } 
            else if (command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') 
            {
                interpretation += "al";
                i += 3; 
            }
        }

        return interpretation;
    }
};