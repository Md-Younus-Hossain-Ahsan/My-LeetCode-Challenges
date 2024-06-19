//2418. Sort the People

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        int len = heights.size();

        if (len == 0)
            return {};

        for (int i = 0; i < len-1; i++) 
        {
            for (int j = i + 1; j < len; j++) 
            {
                if (heights[i] < heights[j]) 
                {
                    swap(heights[i], heights[j]);
                    swap(names[i], names[j]);
                }
            }
        }

        return names;

    }
};