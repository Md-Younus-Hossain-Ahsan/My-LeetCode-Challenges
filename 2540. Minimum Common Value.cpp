//2540. Minimum Common Value

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int len1 = nums1.size();
        int len2 = nums2.size();

        sort(nums1.begin(), nums1.end());

        for(int i=0; i < len1; i++)
        {
            if(binary_search(nums2.begin(), nums2.end(), nums1[i]))
                return nums1[i];
        }
        
        return -1;
    }
};