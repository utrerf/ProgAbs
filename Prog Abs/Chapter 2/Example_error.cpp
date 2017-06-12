//
//  error.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/12/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/* 
 * File: error.cpp
 * ---------------
 * This file implements the error.h interface.
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Example_error.hpp"
using namespace std;

/*
 * Implementation notes: error
 * ---------------------------
 * This function writes out the error message to the cerr strean and
 * then exits the program. The EXIT_FAILURE constant is defined in
 * <cstdlib> to represent a standard failure code.
 */

void error(string msg) {
    cerr << msg << endl;
    exit(EXIT_FAILURE);
}
