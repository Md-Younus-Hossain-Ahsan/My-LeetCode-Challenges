//2469. Convert the Temperature

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        return {celsius+273.15, (9.0/5.0)*celsius+32};      
    }
};