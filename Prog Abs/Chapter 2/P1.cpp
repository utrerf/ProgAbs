//
//  P1.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/18/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: P1
 * --------
 * This file includes the implementation of problem 1 in chapter 2.
 */

#include <iostream>
using namespace std;

/* Function prototype */

double farenheit (double celcius);

/* Main Program */


int main() {
    double i;
    cout << "This program converts temperature from celcius into farenheit" << endl;
    cout << "What's the temperature (celcius)?: ";
    cin >> i;
    cout << "The temperature in farenheit is: " << farenheit(i) << endl;
    return 0;
}

/*
 * Function: farenheit
 * Usage: double f = farenheit(celcius);
 * ------------------------------------
 * This function coverts the temperature from celcius to farenheit
 */

double farenheit (double celcius){
    return ((9.0 / 5.0 * celcius) + 32);
}
