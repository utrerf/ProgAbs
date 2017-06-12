//
//  Example_direction.hpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/12/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: Example_direction_hpp
 * ---------------------------
 * This interface exports an enumarated type called Direction whose
 * elements are the four compass points: NORTH, EAST, SOUTH, and WEST.
 */


#ifndef Example_direction_hpp
#define Example_direction_hpp

#include <string>

/*
 * Type: Direction
 * ---------------
 * This enumerated type is used to represent the four compass directions.
 */

enum Direction { NORTH, EAST, SOUTH, WEST };

/*
 * Function: leftFrom
 * Usage: Direction newdir = leftFrom(dir);
 * ----------------------------------------
 * Returns the direction that is to the left of the argument.
 * For example, leftFrom(NORTH) returns WEST.
 */

Direction leftFrom(Direction dir);

/*
 * Function: rightFrom
 * Usage: Direction newdir = rightFrom(dir);
 * -----------------------------------------
 * Returns the direction that is to the right of the argument.
 * For example, rightFrom(NORTH) returns EAST.
 */

Direction rightFrom(Direction dir);

/*
 * Function: directionToString
 * Usage: string str - directionToString(dir);
 * -------------------------------------------
 * Returns the name of the direction as a string.
 */

std::string directionToString(Direction dir);

#endif
