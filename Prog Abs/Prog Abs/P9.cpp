//
//  P9.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/5/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//

#include <iostream>
using namespace std;


 
// Testing programs for excercise 9 of the book
 
 // Function Prototype
 void factor(int n);
 
 // Main Program
 int main() {
 int number;
 
 cout << "This program returns the prime factorization of a number" << endl;
 cout << "Number? ";
 cin >> number;
 factor(number);
 
 return 0;
 }
 
 // Supporting Function
 void factor (int n) {
 
 while (n % 2 == 0) {
 cout << "2 x ";
 n /= 2;
 }
 
 while (n % 3 == 0) {
 cout << "3 x ";
 n /= 3;
 }
 
 while (n % 5 == 0) {
 cout << "5 x ";
 n /= 5;
 }
 
 while (n % 7 == 0) {
 cout << "7 x ";
 n /= 7;
 }
 
 while (n % 11 == 0) {
 cout << "11 x ";
 n /= 11;
 }
 
 while (n % 13 == 0) {
 cout << "13 x ";
 n /= 13;
 }
 
 while (n % 17 == 0) {
 cout << "17 x ";
 n /= 17;
 }
 
 while (n % 19 == 0) {
 cout << "19 x ";
 n /= 19;
 }
 
 while (n % 23 == 0) {
 cout << "23 x ";
 n /= 23;
 }
 }
 
 
