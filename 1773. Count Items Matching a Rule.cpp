//1773. Count Items Matching a Rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int param, match=0;

        if(ruleKey == "type")
            param = 0;
        else if(ruleKey == "color")
            param = 1;
        else if(ruleKey == "name")
            param = 2;

        for(int i=0; i < items.size(); i++)
        {
            if(items[i][param] == ruleValue)
                match++;
        }

        return match;

    }
};