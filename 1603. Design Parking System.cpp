//1603. Design Parking System

class ParkingSystem {
public:

    int b, m, s;

    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    
    bool addCar(int carType) {
        
        if(carType == 1 && b > 0)
            b--;
        else if(carType == 2 && m > 0)
            m--;
        else if(carType == 3 && s > 0)
            s--;
        else
            return false;
        
        return true;     
    }
};