//1700. Number of Students Unable to Eat Lunch

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int i=0;
        
        while(!students.empty() && i != students.size())
        {
            if(students[0] == sandwiches[0])
            {
                i=0;
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());                
            }
            else
            {
                i++;
                students.push_back(students[0]);
                students.erase(students.begin());
            }
        }
        
        return students.size();        
    }
};