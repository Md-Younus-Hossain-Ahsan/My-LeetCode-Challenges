//3069. Distribute Elements Into Two Arrays I

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector<int> arr1, arr2;
        int len = nums.size();
        
        if(len < 2) return nums;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]); 

        for(int i=2; i < len; i++)
        {
            int m = arr1.size()-1;
            int n = arr2.size()-1;
            
            if(arr1[m] > arr2[n])
                arr1.push_back(nums[i]);
            else
                arr2.push_back(nums[i]); 
        }
    
        for(int n : arr2){
            arr1.push_back(n);}
    
        return arr1;
    }
};