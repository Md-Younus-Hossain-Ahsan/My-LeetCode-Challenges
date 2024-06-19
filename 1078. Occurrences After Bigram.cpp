//1078. Occurrences After Bigram

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        vector<string> res;
        stringstream ss(text);
        string word;
        string prev1 = "", prev2 = "";
        
        while(ss >> word)
        {
            if(prev1 == first && prev2 == second)
                res.push_back(word);
            
            prev1 = prev2;
            prev2 = word;
        }
        
        return res;
    }
};