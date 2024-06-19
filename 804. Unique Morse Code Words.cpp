//804. Unique Morse Code Words

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCodes = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
        unordered_set<string> transformations;
        
        for (const auto& word : words) 
		{
            string transformation;
            for (char c : word) 
			{
                transformation += morseCodes[c - 'a'];
            }
            transformations.insert(transformation);
        }
        
        return transformations.size();
    }
};