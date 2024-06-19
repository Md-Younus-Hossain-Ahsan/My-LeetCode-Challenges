//942. DI String Match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n = s.size();
        int inserted = 0, sum = n*(n+1)/2;
        int low = 0, high = n;
        vector<int> result;

        for(int i=0; i < n; i++)
        {
            if(s[i] == 'I')
            {
                result.push_back(low);
                inserted += low;
                low++;
            }
            else
            {
                result.push_back(high);
                inserted += high;
                high--;
            }
        }

        result.push_back(sum - inserted);

        return result;
    }
};