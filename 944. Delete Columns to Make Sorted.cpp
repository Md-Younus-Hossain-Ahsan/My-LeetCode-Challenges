//944. Delete Columns to Make Sorted

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int len = strs[0].size();
        int res = 0;
        
        for(int i=0; i < len; i++)
        {
            char c = 'a';
            for(string s : strs)
            {
                if(s[i] < c)
                {
                    res++;
                    break;
                }
                c = s[i];                    
            }
        }
        
        return res;        
    }
};