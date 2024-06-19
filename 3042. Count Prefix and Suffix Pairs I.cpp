//3042. Count Prefix and Suffix Pairs I

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        
        int count = 0;

        for(int i=0; i < words.size()-1; i++)
        {
            for(int j=i+1; j < words.size(); j++)
            {
                if(PrefixSuffixPairsCheck(words[i], words[j]))
                    count++;
            }
        }

        return count;
    }

    bool PrefixSuffixPairsCheck(string pref_suff, string s){

        int m = pref_suff.size();
        int n = s.size();

        if(m > n)
            return false;

        return s.substr(0, m) == pref_suff && s.substr(n-m, n) == pref_suff;
    }
};