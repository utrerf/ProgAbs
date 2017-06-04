//
//  Testing.cpp
//  Prog Abs
//
//  Created by Francisco Utrera on 6/4/17.
//  Copyright © 2017 Francisco Utrera. All rights reserved.
//  10 + 9 * ((8 + 7) % 6) + 5 * 4 % 3 * 2 + 1
//  1 + 2 + (3 + 4) * (( 5 * 6 % 7 * 8) - 9) - 10

#include <iostream>
using namespace std;

/*
 Testing programs for excercise 10 of the book
    
// Function Prototype
int hailstone(int n);

// Main Program
int main() {
    int number;
    
    cout << "This program returns the hailstone sequence" << endl;
    cout << "Which number do you want to start with? ";
    cin >> number;
    hailstone(number);
    
    return 0;
}

int hailstone(int n) {
    int const SENTINEL = 1;
    while (n != SENTINEL) {
        if (n % 2 == 0) {
            cout << n << " is even, so I divide it by 2 to get ";
            n /= 2;
            cout << n << endl;
        } else {
            cout << n << " is odd, so I divide it by 3 and add 1 to get ";
            n *= 3;
            n += 1;
            cout << n << endl;
        }
    }
    return 0;
}


 Testing programs for excercise 9 of the book
 
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
 

 Testing programs for excercise 8 of the book

 
int main() {
    int remainder;
    int reversed = 0;
    cout << "This program returns the reverse order of a number" << endl;
    cout << "Number? ";
    cin >> remainder;
    reversed += remainder % 10;
    
    while (remainder/10 > 0) {
        remainder /= 10;
        reversed *= 10;
        reversed += remainder % 10;
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}


 
 Testing programs for excercise 7 of the book

int main() {
    // Initialize variables
    int const SENTINEL = -1;
    double scores = 0;
    double sum = 0;
    int input;
    
    // Main body
    cout << "This program returns the average from a list of numbers." << endl;
    cout << "Number? ";
    cin >> input;
    while (input != SENTINEL) {
        scores += 1;
        sum += input;
        cout << "Number? ";
        cin >> input;
    }
    double average = (sum / scores);
    cout << "The average score is " << average << ".";
    return 0;
}

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
 
 Testing programs for excercise 5 of the book
 
int main() {
    int input;
    int greatest;
    int const SENTINEL = 0;
    cout << "This program returns the largest value from a list of integers. When done, enter " << SENTINEL << endl;
    cout << "Value? ";
    cin >> greatest;
    input = greatest;
    while (input != SENTINEL) {
        greatest = (greatest > input) ? greatest : input;
        cout << "Value? ";
        cin >> input;
    }
    cout << "The largest number is: " << greatest << endl;
    return 0;
}


 Testing programs for excercise 4 of the book
 
int main() {
    int input;
    int sum = 0;
    cout << "This program computes the sum of the the first N odd integers" << endl;
    cout << "How many integers would you like to sum? ";
    for (cin >> input; input > 0; input--) {
        sum += ((input * 2) - 1);
    }
    cout << "The sum of N odd integers is: " << sum << endl;
    return 0;
}

 Testing programs for excercise 3 of the book
 
int main() {
    int sum = 0;
    for (int i = 0; i <= 100; i++) {
        sum += i;
    }
    cout << "The sum of numbers 1-100 is: " << sum << endl;
    return 0;
}


 Testing programs for excercise 2 of the book

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


 Testing programs for excercise 1 of the book


double farenheit (double celcius);

int main() {
    double i;
    cout << "This program converts temperature from celcius into farenheit" << endl;
    cout << "What's the temperature (celcius)?: ";
    cin >> i;
    cout << "The temperature in farenheit is: " << farenheit(i) << endl;
    return 0;
}

double farenheit (double celcius){
    return ((9.0 / 5.0 * celcius) + 32);
}

 Testing programs for question 26 of the book
 
int main() {
    for (int i = 1; i <= 100; i++) {
        cout << i << endl;
    }
    return 0;
}


int main() {
    for (int i = 0; i/100 < 1 ; i += 7) {
        cout << i << endl;
    }
    return 0;
}

int main() {
    for (int i = 100; i >= 0 ; i -= 2) {
        cout << i << endl;
    }
    return 0;
}

*/
