//3146. Permutation Difference between Two Strings

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        int sum = 0, i = 0, j = 0;
        
        for(char a : s)
        {
            j = 0;
            for(char b : t)
            {
                if(a == b)
                {
                    sum += abs(i-j);
                    break;
                }
                j++;
            }
            i++;
        }
        
        return sum;        
    }
};