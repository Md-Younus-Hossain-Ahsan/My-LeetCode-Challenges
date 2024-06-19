//3019. Number of Changing Keys

class Solution {
public:
    int countKeyChanges(string s) {
        
        int changes = 0;
        char a = toupper(s[0]);            
        
        for(int i=0; i < s.size()-1; i++)
        {
            char b = toupper(s[i+1]);
            
            if(a != b)
                changes++;
            a = b;
        }
        
        return changes;        
    }
};