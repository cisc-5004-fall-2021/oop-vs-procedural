#include <iostream>
#include "cars.h"

using namespace std;

int main() {
    // An automotive story told through object-oriented programming
    cars::Car myCar {"Matt", 5000};
    myCar.move(10, 10);
    myCar.move(20, 3.1);
    myCar.refuel();
    myCar.move(10, 10);
    myCar.move(10, 10);
    myCar.wreck();
    myCar.repair();
    myCar.move(0, 1);
    myCar.wreck();
    myCar.repair();

    // Try uncommenting this line. It will cause a compiler error!
    //myCar.value = 10000;

    // Attempted fraud
    double value = myCar.getValue();
    value = 10000;
    myCar.sell("Alice", 1500);
}