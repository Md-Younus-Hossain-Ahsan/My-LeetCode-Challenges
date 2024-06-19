//349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> result;
        
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        vector<int> output;
        if (!result.empty()) {
            output.push_back(result.front());
            for (int i = 1; i < result.size(); i++) {
                if (result[i] != result[i - 1]) {
                    output.push_back(result[i]);
                }
            }
        }

        return output;
        
    }
};