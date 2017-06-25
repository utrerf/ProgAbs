//
//  P6.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/24/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: P6.cpp
 * ------------
 * This file contains the solution to P6 of chapter 2
 */

#include <iostream>
#include "simpio.h"
using namespace std;

/* Function Prototypes */

void getRange(int & min, int & max);
bool isPrime(int num);
void evalRange(int min, int max);

/* Main Program */

int main() {
    int min, max;
    getRange(min, max);
    evalRange(min,max);
    return 0;
}

/*
 * Function: getRange
 * Usage: getRange(min max);
 * --------------------------
 * This function introduces the user to the program and it stores the min and max numbers
 */

void getRange(int & min, int & max) {
    cout << "This program evaluates if any of the numbers within a range are prime." << endl;
    min = getInteger("Min: ");
    max = getInteger("Max: ");
}

/*
 * Function: isPerfect
 * Usage: if(isPerfect(num)) { ...;
 * --------------------------
 * This function evaluates if a number is perfect. 
 * 
 * Perfect is defined as a number that can only be divided by 1 and itself.
 *
 */

bool isPerfect(int num) {
    int primeCount = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            primeCount += 1;
        }
    }
    return primeCount <= 2;
}

/*
 * Function: evalRange
 * Usage: evalRange(min, max);
 * --------------------------
 * This function prints any perfect numbers within min and max.
 */

void evalRange(int min, int max) {
    for (int i = min; i <= max; i++) {
        if(isPerfect(i)) {
            cout << i << " is perfect" << endl;
        }
    }
}
