#include <iostream>
#include "cars.h"

using namespace std;

int main() {
    // An automotive story told through procedural programming and structs
    cars::car myCar = cars::newCar("Matt", 5000);
    cars::move(&myCar, 10, 10);
    cars::move(&myCar, 20, 3.1);
    cars::refuel(&myCar);;
    cars::move(&myCar, 10, 10);
    cars::move(&myCar, 10, 10);
    cars::wreck(&myCar);
    cars::repair(&myCar);
    cars::move(&myCar, 0, 1);
    cars::wreck(&myCar);
    
    // Commit fraud
    myCar.value = 10000;
    cars::sell(&myCar, "Alice", 8650);
}