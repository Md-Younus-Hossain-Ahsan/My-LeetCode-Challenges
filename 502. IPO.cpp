//502. IPO

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        
        vector<pair<int, int>> projects;
        for (int i = 0; i < n; ++i) {
            projects.push_back({capital[i], profits[i]});
        }
        
        sort(projects.begin(), projects.end());
        
        priority_queue<int> max_heap;
        
        int currentCapital = w;
        int idx = 0;
        
        for (int i = 0; i < k; ++i) {
            while (idx < n && projects[idx].first <= currentCapital) {
                max_heap.push(projects[idx].second);
                idx++;
            }
            
            if (!max_heap.empty()) {
                currentCapital += max_heap.top();
                max_heap.pop();
            } else {
                break;
            }
        }
        
        return currentCapital;
    }
};