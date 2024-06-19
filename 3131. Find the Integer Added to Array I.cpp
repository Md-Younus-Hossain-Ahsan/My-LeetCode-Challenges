//3131. Find the Integer Added to Array I

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int x = -1;

        if(nums1[0] >= 0 && nums2[0] >= 0)
        {    
            x = nums2[0] - nums1[0];
        }
        else if(nums1[0] < 0 && (nums2[0] < 0 || nums2[0] >= 0))
        {
            x = nums2[0] + abs(nums1[0]);
        }

        return x;

    }
};