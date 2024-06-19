//2828. Check if a String Is an Acronym of Words

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acronym = "";

        for (const auto& word : words) {
            acronym += word[0];
        }

        return acronym == s;
    }
};