/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * Assignment: EECS168 Lab 2 (Exercise 2)
 * Description: This program will show the roots by using the quadratic equation.
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
double userC;
double root1 = 0.0;
double root2 = 0.0;
std:: cout << "Input a: ";
std:: cin >> userA;
std:: cout << "Input b: ";
std:: cin >> userB;
std:: cout << "Input c: ";
std:: cin >> userC;
std:: cout << "Root 1: ";
root1 = (-(userB) + sqrt((userB * userB) - ( 4 * userA * userC))) / ( 2 * userA);
std:: cout << root1 << std:: endl;
std:: cout << "Root 2: ";
root2 = (-(userB) - sqrt((userB * userB) - ( 4 * userA * userC))) / ( 2 * userA);
std:: cout << root2 << std:: endl;
}
