/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * Assignment: EECS168 Lab 2 (Exercise 3)
 * Description: This program will convert the input temperature from Fahrenheit to Celsius.
 * Date: February 4, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include <math.h>

int main()
{ 

double userF;
double userC = 0.0;
std:: cout << "Enter the value of the Fahrenheit: ";
std:: cin >> userF;
std:: cout << "The Fahrenheit's conversion to Celsius is: ";
userC = (((userF - 32) * 5) / 9);
std:: cout << userC << std:: endl;

}

