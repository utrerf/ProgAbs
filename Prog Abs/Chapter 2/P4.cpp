//
//  P4.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/18/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: P4
 * --------
 * This file includes the implementation of problem 4 in chapter 2.
 */

#include <iostream>
#include <math.h>
using namespace std;

/* Function Prorotypes */

void getTemperature(double & t, double & v);
double windChill(double t, double v);

/* Main Program */

int main() {
    double temperature, wind;
    getTemperature(temperature, wind);
    cout << "For a temperature of: " << temperature << " and a wind speed of: " << wind << endl;
    cout << "The wind chill is: " << int(windChill(temperature, wind)) << endl;
    return 0;
}

/*
 * Function: getTemperature
 * Usage: getTemperature(temperature, wind)
 * ----------------------------------------
 * This function introduces the user to the program and it receives the temperature and wind values
 * Note that temperature is expressed in farenheit and wind in miles per our
 */

void getTemperature(double & t, double & v) {
    cout << "This program returns the temperature considering the effect of wind chill. " << endl;
    cout << "What is the temperature (in Farenheit): ";
    cin >> t;
    while (t > 40) {
        cout << "Please enter a temperature lower than 40 degrees Farenheit." << endl;
        cout << "What is the temperature (in Farenheit): ";
        cin >> t;
    }
    cout << "What is the wind speed (in miles per hour): ";
    cin >> v;
}

/*
 * Function: windChill
 * Usage: windChill(temperature, wind)
 * ----------------------------------------
 * This function returns the temperature in farenheit taking into account the effect of wind chill.
 * The general function to express this behavior is:
 *
 *     Wind Chill(F) = 35.74 + 0.6215 * t - 35.75 * ((v) ^ (0.16)) + 0.4275 * t * (v ^ (0.16))
 *
 * where:
 * t = Temperature in Farenheit
 * v = Wind Velocity in Miles per Hour
 *
 * Special Cases:
 * 1. If there's no windChill, windChill should return the original temperature t.
 * 2. If the temperature is greater than 40 F, the windChill is undefined and your function should 
 *    call error with an appropriate message.
 */


double windChill(double t, double v) {
    if (v <= 0) {
        return t;
    } else {
        double windChill = 35.74 + 0.6215 * t - 35.75 * (pow(v, 0.16)) + 0.4275 * t * (pow(v,0.16));
        return windChill;
    }
}
