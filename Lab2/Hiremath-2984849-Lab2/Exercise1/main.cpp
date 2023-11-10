/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * Assignment: EECS168 Lab 2 (Exercise 1)
 * Description: This program will show the value of the hypotenuse.
 * Date: February 4, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include <math.h>

int main()
{

       double userA;
       double userB;
       double answer = 0.0;
       std:: cout << "Will use the formula a^2 + b^2 = c^2 to solve the hypotenuse of a triangle." << std:: endl;
       std:: cout << "Input a value for a: ";
       std:: cin >> userA;
       std:: cout << "Input a value for b: ";
       std:: cin >> userB;
       std:: cout << "The hypotenuse is: ";
       answer = sqrt((userA * userA) + (userB * userB));
       std:: cout << answer << std:: endl;
}

