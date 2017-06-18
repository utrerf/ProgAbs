//
//  P2.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/18/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: P2
 * --------
 * This file includes the implementation of problem 2 in chapter 2.
 */

#include <iostream>
using namespace std;

/* Constants */

double const METERS_PER_INCH = 0.0254;                  /* Meters per Inch */
double const METERS_PER_FOOT = 12 * METERS_PER_INCH;    /* Meters per Foot */

/* Function Prototypes */

void getMeters(double & meters);
double metersToInches(double meters, double & inches);
double metersToFeet(double meters, double & feet);

/* Main Program */

int main() {
    double meters, feet, inches;
    getMeters(meters);
    cout << "The length in inches is: " << metersToInches(meters, inches) << endl;
    cout << "The length in feet is: " << metersToFeet(meters, feet) << endl;
    return 0;
}

/*
 * Function: getMeters
 * Usage: getMeters(meters);
 * -------------------------
 * This fuction explains the user what the program does and received the
 * number of meters to covers into inches and feet.
 */

void getMeters(double & meters) {
    cout << "This program converts meters meters to inches and feet" << endl;
    cout << "What's the length (meters)?: ";
    cin >> meters;
}


/*
 * Function: metersToInches
 * Usage: metersToInches(meters, inches);
 * -------------------------
 * This fuction converts meters to inches. Returning inches.
 */

double metersToInches (double meters, double & inches) {
    inches = meters / METERS_PER_INCH;
    return inches;
}

/*
 * Function: metersToFeet
 * Usage: metersToFeet(meters, inches);
 * -------------------------
 * This fuction converts meters to feet. Returning feet.
 */

double metersToFeet (double meters, double & feet) {
    feet = meters / METERS_PER_FOOT;
    return feet;
}


