#include <iostream>
#include "cars.h"

namespace cars {
    // Car factory function - please call this when you want a new car
    car newCar(string owner, double value) {
        cout << owner << " got a new car for $" << value << endl;
        
        return car {0.0, 0.0, 100, value, owner, false};
    }

    // Move the car to a new x, y location if there is enough fuel
    void move(car* c, double x, double y) {
        if(c->fuel >= 10.0 && !c->isBroken) {
            cout << c->owner << "'s car is being driven from ";
            cout << "(" << c->x << "," << c->y << ") to ";
            cout << "(" << x << "," << y << ")" << endl;

            c->x = x;
            c->y = y;
            c->fuel -= 10;
            c->value *= 0.999;
        } else {
            cout << c->owner << "'s car is out of gas" << endl;
        }
    }

    // Refuel the car
    void refuel(car* c) {
        cout << c->owner << "'s car is refueled" << endl;
        c->fuel = 100;
    }

    // Sell the car to a new owner at a given price
    void sell(car* c, string newOwner, double salePrice) {
        cout << c->owner << "'s car, worth $" << c->value;
        cout << ", was sold to " << newOwner;
        cout << " for $" << salePrice << endl;
        c->owner = newOwner;
        c->value = salePrice;
    }

    // Repair a car
    void repair(car* c) {
        cout << c->owner << "'s car was serviced" << endl;
        c->isBroken = false;
        c->value *= 1.1;
    }

    // :[
    void wreck(car* c) {
        cout << c->owner << "'s car was wrecked" << endl;
        c->isBroken = true;
        c->value *= 0.5;
    }
}