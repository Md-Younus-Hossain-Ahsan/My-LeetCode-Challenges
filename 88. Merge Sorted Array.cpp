//88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i, j, f, l, s = m + n - 1;
        
        for(i = m-1, j = n-1; s >= 0; s--)
        {
            if(i >= 0 && j >= 0)
            {
                if(nums1[i] >= nums2[j])
                {
                    nums1[s] = nums1[i];
                    i--;
                }
                else{
                    nums1[s] = nums2[j];
                    j--;
                }
            }
            else if(i < 0)
            {
                nums1[s] = nums2[j];
                j--;
            }
            else if(j < 0)
            {
                nums1[s] = nums1[i];
                i--;
            }
            
        }        
        
    }
};