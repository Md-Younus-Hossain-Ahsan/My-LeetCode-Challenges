//3074. Apple Redistribution into Boxes

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int i = 0;
        int count = 0;
        int sum = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end(), greater<int>());
        
        while(sum > 0)
        {
            sum -= capacity[i++];
            count++;
        }
        
        return count;
    }
};