//1093. Statistics from a Large Sample

class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        int total_count = accumulate(count.begin(), count.end(), 0);
        double min_val = findMin(count);
        double max_val = findMax(count);
        double mean = findMean(count, total_count);
        double median = findMedian(count, total_count);
        double mode = findMode(count);
        
        return {min_val, max_val, mean, median, mode};
    }
    
private:
    double findMin(vector<int>& count) {
        for (int i = 0; i < count.size(); ++i) {
            if (count[i] > 0)
                return i;
        }
        return -1;
    }
    
    double findMax(vector<int>& count) {
        for (int i = count.size() - 1; i >= 0; --i) {
            if (count[i] > 0)
                return i;
        }
        return -1;
    }
    
    double findMean(vector<int>& count, int total_count) {
        long long sum = 0; // Use long long to prevent overflow
        for (int i = 0; i < count.size(); ++i) {
            sum += (long long)i * count[i]; // Cast to long long
        }
        return sum / (double)total_count; // Ensure division is done in double
    }
    
    double findMedian(vector<int>& count, int total_count) {
        int median_index = total_count / 2;
        bool is_even = total_count % 2 == 0;
        int cumulative_count = 0;
        double median_val = 0.0;
        int prev_count = 0;

        for (int i = 0; i < count.size(); ++i) {
            cumulative_count += count[i];

            if (!is_even && cumulative_count > median_index) {
                median_val = i;
                break;
            } else if (is_even && cumulative_count >= median_index) {
                if (cumulative_count > median_index) {
                    median_val = i;
                    break;
                } else {
                    int next_val = i + 1;
                    while (count[next_val] == 0) {
                        next_val++;
                    }
                    median_val = (i + next_val) / 2.0;
                    break;
                }
            }

            prev_count = count[i];
        }
        return median_val;
    }
    
    double findMode(vector<int>& count) {
        int max_count = *max_element(count.begin(), count.end());
        for (int i = 0; i < count.size(); ++i) {
            if (count[i] == max_count)
                return i;
        }
        return -1;
    }
};