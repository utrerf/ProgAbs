//
//  P12.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/5/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;


// Prototype Functions
double aprox_pi(double i);

// Main Program
int main() {
    double number;
    cout << "This program return an aproximation of PI given a number of iterations." << endl;
    cout << "How many iterations would you like to complete? ";
    cin >> number;
    aprox_pi(number);
    
    return 0;
}

double aprox_pi(double i) {
    double approx = 0.0;
    double const RADIUS = 2.0;
    double mid = (RADIUS / (2.0 * i));
    double const BASE = RADIUS / i;
    while (i > 0) {
        //double height = sqrt(RADIUS * RADIUS - mid * mid);
        //double area = height * BASE;
        //approx += area;
        i -= 1;
    }
    cout << approx << endl;
    return 0;
}
