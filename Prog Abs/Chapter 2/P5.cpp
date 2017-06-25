//
//  P4+.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/21/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: P5
 * --------
 * This file includes the implementation of problem 5 in chapter 2.
 */


#include <iostream>
using namespace std;

/* Function Prototypes */

void getRange(int & start, int & end);
bool isPerfect(int num);
void evalRange(int start, int end);

/* Main Program */

int main() {
    int start, end;
    getRange(start, end);
    evalRange(start,end);
    return 0;
}

/*
 * Function: getRange
 * Usage: getRange(start, end);
 * ----------------------------
 * This function asks the user for a range of numbers to be evaluated
 */

void getRange(int & start, int & end) {
    cout << "This program evaluates if any of the numbers within a range are perfect." << endl;
    cout << "Start: ";
    cin >> start;
    cout << "End: ";
    cin >> end;
}

/*
 * Function: isPerfect
 * Usage: isPerfect(num);
 * ----------------------------
 * This function evaluates if a number is perfect, where perfect is defined as follows:
 *
 *     SUM of divisors = Perfect Number
 */

bool isPerfect(int num) {
    int sumDivs = 0;
    for (int i = 1; i < num ; i++) {
        if (num % i == 0) {
            sumDivs += i;
        }
    }
    return sumDivs == num;
}

/*
 * Function: evalRange
 * Usage: evalRange (start, end);
 * ----------------------------
 * This function evaluates all numbers within a range and prints a string with the perfect numbers.
 */

void evalRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << " is perfect" << endl;
        }
    }
}

