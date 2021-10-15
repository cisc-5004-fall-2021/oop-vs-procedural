#include <string>

namespace cars {
    using namespace std;

    struct car {
        double x, y;
        double fuel;
        double value;
        string owner;
        bool isBroken;
    };

    // Car factory function - please call this when you want a new car
    car newCar(string, double);

    // Move the car to a new x, y location if there is enough fuel
    void move(car*, double, double);

    // Refuel the car
    void refuel(car*);

    // Sell the car to a new owner at a given price
    void sell(car*, string, double);

    // Repair a car
    void repair(car*);

    // :[
    void wreck(car*);
};