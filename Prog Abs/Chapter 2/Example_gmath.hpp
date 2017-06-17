//
//  Example_gmath.hpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/16/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: Example_gmath.hpp
 * -----------------------
 * This file exports the constant PI along with  a few degree -based
 * trigonometric functions, which are typically easier to use than
 * their radian-based counterparts in <cmath>.
 */


#ifndef Example_gmath_hpp
#define Example_gmath_hpp

/* Constants */

extern const double PI;          /* The mathematical constant PI */

/*
 * Function: sinDegrees
 * Usage: double sine = sinDegrees(angle);
 * ---------------------------------------
 * Returns the trigonometric sine of angle expressed in degrees.
 */

double sinDegrees(double angle);

/*
 * Function: cosDegrees
 * Usage: double cosine = cosDegrees(angle);
 * -----------------------------------------
 * Returns the trigonometric cosine of angle expressed in degrees.
 */

double cosDegrees(double angle);

/*
 * Function: toDegrees
 * Usage: double degrees = toDegrees(radians);
 * -------------------------------------------
 * Convers an angle from radians to degrees
 */

double toDegrees(double radians);

/*
 * Function: toRadians
 * Usage: double radians = toRadians(degrees);
 * -------------------------------------------
 * Convers an angle from degrees to radians.
 */

double toRadians(double degrees);

#endif /* Example_gmath_hpp */
