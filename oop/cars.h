#include <string>

namespace cars {
    using namespace std;

    class Car {
        public:
            // Constructor: Create a new car with a name and value
            Car(string, double);

            // Move the car to a new x, y location if there is enough fuel
            void move(double, double);

            // Refuel the car
            void refuel();

            // Sell the car to a new owner at a given price
            void sell(string, double);

            // Repair a car
            void repair();

            // :[
            void wreck();

            // Getter function to retrieve the current valuation of the car
            double getValue();
        private:
            double x, y;
            double fuel;
            double value;
            string owner;
            bool isBroken;
    };
};