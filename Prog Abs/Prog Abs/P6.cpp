//
//  P6.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/5/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 
 Testing programs for excercise 6 of the book
 
 int main() {
 // Initialize variables (including SENTINEL constant (short-circuit)
 int input;
 int greatest;
 int second_greatest;
 int const SENTINEL = 0;
 
 // First input records value as greatest
 cout << "This program returns the largest value from a list of integers. When done, enter " << SENTINEL << endl;
 cout << "Value? ";
 cin >> greatest;
 input = greatest;
 if (input == SENTINEL) {
 cout << "The largest number is: " << greatest << endl;
 cout << "The second largest number is undefined" << endl;
 return 0;
 }
 
 // Second input evaluates greatest and second greatest
 cout << "Value? ";
 cin >> input;
 second_greatest = (input >= greatest) ? greatest : input;
 greatest = (greatest > input) ? greatest : input;
 if (input == SENTINEL) {
 cout << "The largest number is: " << greatest << endl;
 cout << "The second largest number is: " << second_greatest << endl;
 return 0;
 }
 
 // This kicks off the 3+ iterations
 cout << "Value? ";
 cin >> input;
 while (input != SENTINEL) {
 second_greatest = (input >= greatest) ? greatest : ((second_greatest > input) ? second_greatest : input);
 greatest = (greatest > input) ? greatest : input;
 cout << "Value? ";
 cin >> input;
 }
 cout << "The largest number is: " << greatest << endl;
 cout << "The second largest number is: " << second_greatest << endl;
 return 0;
 }
 
 */
