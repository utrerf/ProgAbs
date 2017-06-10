//
//  P2.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/5/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

#include <iostream>
using namespace std;


// Testing programs for excercise 2 of the book
 
double const METERS_PER_INCH = 0.0254;
double const METERS_PER_FOOT = 12 * METERS_PER_INCH;

double meters_to_inches (double meters);
double meters_to_feet (double meters);

int main() {
double i;
cout << "This program converts meters meters to inches and feet" << endl;
cout << "What's the length (meters)?: ";
cin >> i;
cout << "The length in inches is: " << meters_to_inches(i) << endl;
cout << "The length in feet is: " << meters_to_feet(i) << endl;
return 0;
}

double meters_to_inches (double meters) {
return meters * METERS_PER_INCH;
}

double meters_to_feet (double meters) {
return meters * METERS_PER_FOOT;
}

 
