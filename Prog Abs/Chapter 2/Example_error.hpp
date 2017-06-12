//
//  error.hpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/12/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

/*
 * File: Example_error.hpp
 * -------------
 * This file defines a simple function for reporting errors.
 */


#ifndef Example_error_hpp
#define Example_error_hpp

/*
 * Function: error
 * Usage: error(msg);
 * ------------------
 * Writes the string msg to the cerr stream and then exits the program
 * with a standard status code indicating failre. The usual pattern for
 * using error is to enclose the call to error inside an if statement that
 * checks for a particular condition, which might look something like this:
 *
 *      if (divisor == 0) error("Division by zero")
 */

void error(std::string msg);

#endif 
