class Solution {
public:
    string oddString(vector<string>& words) {
        
        string res;
        vector<int> arr1, arr2, arr3;
        
        arr1 = checker(words[0]);
        arr2 = checker(words[1]);            
        
        for(int i=0; i < words.size()-2; i++)
        {
            arr3 = checker(words[i+2]);
            
            if(arr1 != arr2 && arr2 == arr3)
                return words[i];
            else if(arr2 != arr3 && arr1 == arr3)
                return words[i+1];
            else if(arr3 != arr1 && arr1 == arr2)
                return words[i+2];
            
            arr1 = arr2;
            arr2 = arr3;
        }
        
        return "";
    }
    
    vector<int> checker(string s) {
        
        vector<int> arr;
        
        for (int i=0; i < s.size() - 1; i++) 
        {
            arr.push_back(s[i] - s[i + 1]);
        }
        
        return arr;
    }
};