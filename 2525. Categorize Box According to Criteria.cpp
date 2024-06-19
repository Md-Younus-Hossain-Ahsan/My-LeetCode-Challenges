//2525. Categorize Box According to Criteria

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
        bool heavy = isHeavy(mass);
        bool bulky = isBulky(length, width, height);
        
        if (heavy && bulky)
            return "Both";
        if (!heavy && !bulky)
            return "Neither";
        if (heavy && !bulky)
            return "Heavy";
        if (!heavy && bulky)
            return "Bulky";
        
        return "";
    }
    
    bool isHeavy(int mass) {
        return mass >= 100;
    }
    
    bool isBulky(int length, int width, int height) {
        
        if (length >= 10000 || width >= 10000 || height >= 10000)
            return true;
        
        long long volume = (long long) length * width * height;
        return volume >= 1000000000;
    }
};