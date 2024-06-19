//869. Reordered Power of 2

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        unordered_set<string> powers;
        for (int i = 0; i < 32; ++i) {
            string power = to_string(1 << i);
            sort(power.begin(), power.end());
            powers.insert(power);
        }
        
        string str_n = to_string(n);
        sort(str_n.begin(), str_n.end());
        
        return powers.count(str_n) > 0;
        
    }
};