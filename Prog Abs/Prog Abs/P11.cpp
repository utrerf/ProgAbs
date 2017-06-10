//
//  P11.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/5/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

#include <iostream>
using namespace std;


// Testing programs for excercise 11 of the book
 
 
 // Function prototype
 int pi_approx(double n);
 
 // Main Program
 int main() {
 int number;
 cout << "This program returns the approximation of PI given a number of iterations";
 cout << "Number of iterations: ";
 cin >> number;
 pi_approx(number);
 
 return 0;
 }
 
 // Supporting Function
 int pi_approx(double n) {
 double iterations = n;
 double balance = 1;
 double denominator = 3;
 int i = 1;
 while (n > 0) {
 if (i % 2 == 1){
 balance -= 1.0/denominator;
 i += 1;
 denominator += 2;
 n -= 1;
 } else {
 balance += 1.0/denominator;
 i += 1;
 denominator += 2;
 n -= 1;
 }
 }
 cout << "PI approximates to : " << balance * 4 << " given " << iterations << " iterations." << endl;
 return 0;
 }

 
