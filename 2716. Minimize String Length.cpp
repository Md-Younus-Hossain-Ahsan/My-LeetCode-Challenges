//2716. Minimize String Length

class Solution {
public:
    int minimizedStringLength(string s) {
        
        unordered_map<char, int> st;
        
        for(char c : s)
        {
            st[c]++;
        }
        
        return st.size();   
    }
};