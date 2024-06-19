//2570. Merge Two 2D Arrays by Summing Values

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>> output;
        int i = 0, j = 0;
        int len1 = nums1.size(), len2 = nums2.size();
        int max_id = max(len1 > 0 ? nums1[len1-1][0] : 0, len2 > 0 ? nums2[len2-1][0] : 0);

        while (i < len1 || j < len2) 
        {
            if (i < len1 && j < len2 && nums1[i][0] == nums2[j][0]) 
            {
                output.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            } 
            else if (i < len1 && (j >= len2 || nums1[i][0] < nums2[j][0])) 
            {
                output.push_back(nums1[i++]);
            } 
            else if (j < len2 && (i >= len1 || nums1[i][0] > nums2[j][0])) 
            {
                output.push_back(nums2[j++]);
            }
        }

        return output;
    }
};