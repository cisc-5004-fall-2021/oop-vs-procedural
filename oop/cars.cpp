#include <iostream>
#include "cars.h"

namespace cars {
    // Car constructor
    Car::Car(string newOwner, double newValue) {
        cout << newOwner << " got a new car for $" << newValue << endl;
        
        x = 0.0;
        y = 0.0;
        fuel = 100;
        value = newValue;
        owner = newOwner;
        isBroken = false;
    }

    // Move the car to a new x, y location if there is enough fuel
    void Car::move(double newX, double newY) {
        if(fuel >= 10.0 && !isBroken) {
            cout << owner << "'s car is being driven from ";
            cout << "(" << x << "," << y << ") to ";
            cout << "(" << newX << "," << newY << ")" << endl;

            x = newX;
            y = newY;
            fuel -= 10;
            value *= 0.999;
        } else {
            cout << owner << "'s car is out of gas" << endl;
        }
    }

    // Refuel the car
    void Car::refuel() {
        cout << owner << "'s car is refueled" << endl;
        fuel = 100;
    }

    // Sell the car to a new owner at a given price
    void Car::sell(string newOwner, double salePrice) {
        cout << owner << "'s car, worth $" << value;
        cout << ", was sold to " << newOwner;
        cout << " for $" << salePrice << endl;
        owner = newOwner;
        value = salePrice;
    }

    // Repair a car
    void Car::repair() {
        cout << owner << "'s car was serviced" << endl;
        isBroken = false;
        value *= 1.15;
    }

    // :[
    void Car::wreck() {
        cout << owner << "'s car was wrecked" << endl;
        isBroken = true;
        value *= 0.5;
    }

    double Car::getValue() {
        return value;
    }
}