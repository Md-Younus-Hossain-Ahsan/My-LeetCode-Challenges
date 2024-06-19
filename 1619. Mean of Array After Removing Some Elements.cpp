//1619. Mean of Array After Removing Some Elements

class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        double sum = 0;
        double count = 0;
        int len = arr.size();
        int ignore = 5 * len / 100;
        int i = ignore;
        
        sort(arr.begin(), arr.end());
        
        while(i < len-ignore)
        {
            sum += arr[i];
            i++;
            count++;
        }
         
        return sum / count;
    }
};