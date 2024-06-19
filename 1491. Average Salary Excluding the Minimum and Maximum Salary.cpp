//1491. Average Salary Excluding the Minimum and Maximum Salary

class Solution {
public:
    double average(vector<int>& salary) {
        
        int len = salary.size();
        sort(salary.begin(), salary.end());
        int sum = accumulate(salary.begin(), salary.end(), 0) - salary[0] - salary[len-1];        
        return (double) sum / (double) (len-2);
    }
};