//
//  Example_random.hpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/16/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: Example_random.hpp
 * ------------------------
 * This file exports the functions for generating pseudorandom numbers.
 */

#ifndef Example_random_hpp
#define Example_random_hpp

/*
 * Function: randomInteger
 * Usage: int n = randomInteger(low, high);
 * ----------------------------------------
 * Returns a randmon integer in the range low to high, inclusive.
 */

int randomInteger(int low, int high);

/*
 * Function: randomReal
 * Usage: double d = randomReal(low, high);
 * ----------------------------------------
 * Returns a random real number in the half-open interval (low, high). A
 * half-open interval includes the first endpoint but not the second, which
 * means that the result is always greater than or equal to low but
 * strictly less than high.
 */

double randomReal(double low, double high);

/*
 * Function: randomChance
 * Usage: if(randomChance(p) ...
 * -----------------------------
 * Returns true with the probability indicated by p. The argument p must
 * be a floating-point number between 0 (never) and 1 (always). For
 * example, calling randomChance(.30) returns true 30 percent of the time.
 */

bool randomChance(double p);

/*
 * Function: setRandomSeed
 * Usage: setRandomSeed(seed);
 * ---------------------------
 * Sets the internal random number seed to the specified value. You can
 * use this function to set a specific starting point for the pseudorandom
 * sequence or to ensure that program behavior is repeatable during the 
 * debugging phase.
 */

void setRandomSeet (int seed);

#endif /* Example_random_hpp */
