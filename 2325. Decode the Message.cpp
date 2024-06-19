//2325. Decode the Message

class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char, char> substitutionMap;
        int index = 0;
        
        for (char c : key) 
        {
            if (c != ' ' && substitutionMap.find(c) == substitutionMap.end())
                substitutionMap[c] = 'a' + index++;
        }
        
        for (char& c : message) 
        {
            if (c != ' ') 
                c = substitutionMap[c];
        }
        
        return message;
    }
};