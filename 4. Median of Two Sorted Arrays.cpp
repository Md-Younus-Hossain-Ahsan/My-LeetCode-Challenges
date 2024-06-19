//4. Median of Two Sorted Arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i, j, f, l;
        int m = nums1.size(), n = nums2.size();
        int s = m + n - 1;
        vector<int> merged_array(m+n);
        
        for(i = m-1, j = n-1; s >= 0; s--)
        {
            if(i >= 0 && j >= 0)
            {
                if(nums1[i] >= nums2[j])
                {
                    merged_array[s] = nums1[i];
                    i--;
                }
                else{
                    merged_array[s] = nums2[j];
                    j--;
                }
            }
            else if(i < 0)
            {
                merged_array[s] = nums2[j];
                j--;
            }
            else if(j < 0)
            {
                merged_array[s] = nums1[i];
                i--;
            }
        }

        int final_length = merged_array.size();
        int middle = final_length/2;
        double median = 0;

        if(final_length % 2 == 0)
        {
            median = (double) (merged_array[middle - 1] + merged_array[middle])/2.0;
            return median;
        }
        else
        {
            median = (double) merged_array[middle];
            return median;
        }

    }
};