//
//  Example_direction.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/12/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: direction.cpp
 * --------------------
 * This file implements the direction.h interface
 */

#include <string>
#include "Example_direction.hpp"
using namespace std;

/*
 * Implementation notes: leftFrom, rightFrom
 * -----------------------------------------
 * These functions use the remainder operator to cicle through the
 * interval values of the enumaration type. Note that the leftFrom
 * fuction cannot subtract 1 from the direction because the result
 * might then be negative; adding 3 achieves the same effect but
 * ensures that the values remain positive.
 */

Direction leftFrom(Direction dir) {
    return Direction((dir + 3) % 4);
}

Direction rightFrom(Direction dir) {
    return Direction((dir + 1) % 4);
}

/*
 * Implementation notes: directionToString
 * ---------------------------------------
 * Most C++ compilers require the default clause to make sure that this
 * function always returns a string, even if the direction is not one
 * of the legal values.
 */

string directionToString(Direction dir) {
    switch (dir) {
        case NORTH: return "NORTH";
        case EAST: return "EAST";
        case SOUTH: return "SOUTH";
        case WEST: return "WEST";
        default: return "???";
    }
}
