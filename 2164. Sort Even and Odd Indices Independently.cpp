//2164. Sort Even and Odd Indices Independently

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int> odd;
        vector<int> even;
        vector<int> res(nums.size());
                
        for(int i = 0; i < nums.size(); i++) 
        {
            if(i % 2 == 0)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end(), greater<int>());
                
        int oddIndex = 0, evenIndex = 0;
        
        for(int i = 0; i < nums.size(); i++) 
        {
            if(i % 2 == 0)
                res[i] = odd[oddIndex++];
            else
                res[i] = even[evenIndex++];
        }
        
        return res;
    }
};
