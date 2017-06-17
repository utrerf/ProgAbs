//
//  Example_gmath.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/16/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: Example_gmath.cpp
 * -----------------------
 * This file implements the Example_gmath.hpp interface. In all cases, the
 * implementation for each function requires only one line of code,
 * which makes detailed documentation unnecessary.
 */

#include <cmath>

#include "Example_gmath.hpp"
extern const double PI = 3.14159265358979323846;

double sinDegrees(double angle) {
    return sin(toRadians(angle));
}

double cosDegrees(double angle) {
    return cos(toRadians(angle));
}

double toDegrees(double radians) {
    return radians * 180 / PI;
}

double toRadians(double degrees) {
    return degrees * PI / 180;
}
