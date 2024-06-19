//682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> scores;
        int sum = 0;

        for (const string& op : ops) 
        {
            if (op == "+") 
            {
                int prev1 = scores.top(); scores.pop();
                int prev2 = scores.top(); scores.pop();
                int curr = prev1 + prev2;
                scores.push(prev2);
                scores.push(prev1);
                scores.push(curr);
                sum += curr;
            } 
            else if (op == "D") 
            {
                int prev = scores.top();
                int curr = prev * 2;
                scores.push(curr);
                sum += curr;
            } 
            else if (op == "C") 
            {
                int prev = scores.top(); scores.pop();
                sum -= prev;
            } 
            else 
            {
                int num = stoi(op);
                scores.push(num);
                sum += num;
            }
        }

        return sum;
    }
};