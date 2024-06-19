//1385. Find the Distance Value Between Two Arrays


class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int count = 0;
        
        for(int i : arr1)
        {
            bool valid = true;
            for(int j=0; j < arr2.size(); j++)
            {
                if(abs(i - arr2[j]) <= d)
                {
                    valid = false;
                    break;
                }
            }
            
            if(valid)
                count++;
        }
        
        return count;
    }
};