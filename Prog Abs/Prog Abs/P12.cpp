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

/*

// Prototype Functions
long double aprox_pi(long double i);

// Main Program
int main() {
    long double number;
    cout << "This program return an aproximation of PI given a number of iterations." << endl;
    cout << "How many iterations would you like to complete? ";
    cin >> number;
    aprox_pi(number);
    
    return 0;
}

long double aprox_pi(long double i) {
    long double iter = i;
    long double approx = 0.0;
    const long double RADIUS = 2.0;
    long double mid = (RADIUS / (2.0 * i));
    long double const BASE = RADIUS / i;
    while (i > 0.0) {
        long double height = sqrt(RADIUS * RADIUS - mid * mid);
        long double area = height * BASE;
        approx += area;
        mid += BASE;
        i -= 1.0;
    }
    cout << "PI approximates to " << approx << " given "<< iter << " iterations." << endl;
    return 0;
}

*/
