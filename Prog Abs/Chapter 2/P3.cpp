//
//  P3.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/18/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: P3
 * --------
 * This file includes the implementation of problem 3 in chapter 2.
 */

#include <iostream>
using namespace std;

/* Function Prototypes */

void getNumber(double & num);
int roundToNearestInt(double num, int & rounded);

/* Main Program */

int main() {
    double num;
    int rounded;
    getNumber(num);
    cout << "The nearest integet to " << num << " is : " << roundToNearestInt(num, rounded) << endl;
    return 0;
}

/*
* Function: getNumber
* Usage: getNumber(num);
* ----------------------
* This function introduces the program to the user and received the number to be rounded.
*/

void getNumber(double & num) {
    cout << "This program receives a number and returns the nearest integer" << endl;
    cout << "What number would you like to round to the nearest integer? ";
    cin >> num;
}

/*
 * Function: roundToNeareastInteger
 * Usage: int round = roundToNeareastInteger(num, round);
 * ------------------------------------------------------
 * This function rounds a number to it's nearest positive or negative integer.
 */

int roundToNearestInt(double num, int & rounded) {
    if (num >= 0) {
        rounded = int(num + .5);
    } else {
        rounded = int(num - .5);
    }
    return rounded;
}

