//
//  Quadratic.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/11/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: Example_Quadratic(lib).cpp
 * ---------------------------
 * This program finds the roots of the quadratic equation using the error library
 *
 *          2
 *       a x   +  b x  +  c  =  0
 *
 * If a is 0 or if the equation has no real roots, the
 * program prints an error message and exits.
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Example_error.hpp"
using namespace std;

/* Function Prototypes */

void getCoefficients(double & a, double & b, double & c);
void solveQuadratic(double a, double b, double c,
                    double & x1, double & x2);
void printRoots (double x1, double x2);

/* Main program */

int main() {
    double a, b, c, r1, r2;
    getCoefficients(a, b, c);
    solveQuadratic(a, b, c, r1, r2);
    printRoots(r1, r2);
    return 0;
}

/*
 * Function: getCoefficients
 * Usage: getCoeffients(a, b, c);
 * ------------------------------
 * Reads the coefficients of a quadratuc equation into the
 * reference [araeters a, b, and c.
 */

void getCoefficients (double & a, double & b, double & c) {
    cout << "Enter the coefficients for the quadratic equation:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
}

/*
 * Function: solveQuadratic
 * Usage: solveQuadratic(a, b, c, x1, x2);
 * ------------------------------
 * Solves a quadratic equation for the coefficients a, b, and c. The
 * roots arereturned in the reference parameters x1 and x2.
 */

void solveQuadratic(double a, double b, double c,
                    double & x1, double & x2) {
    if (a == 0) error("The coefficient must be nonzero");
    double disc = b * b - 4 * a * c;
    if (disc < 0) error("This equation has no real roots.");
    double sqrtDisc = sqrt(disc);
    x1 = (-b + sqrtDisc) / (2 * a);
    x2 = (-b - sqrtDisc) / (2 * a);
}

/*
 * Function: printRoots
 * Usage: printRoots(x1, x2);
 * ------------------------------
 * Displays x1 and x2, which are the roots of the quadratic equation.
 */

void printRoots(double x1, double x2) {
    if (x1 == x2) {
        cout << "There is a double root at " << x1 << endl;
    } else {
        cout << "The roots are " << x1 << " and " << x2 << endl;
    }
}

