/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * Assignment: EECS168 Lab 2 (Exercise 5)
 * Description: This program will show the quantities of sodas in 3 different packages.
 * Date: February 4, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include <math.h>

int main()
{

int userSodas;
int userFridgeCubes = 0;
int userSixPacks = 0;
int userSingles = 0;
std:: cout << "How many sodas do you have?: ";
std:: cin >> userSodas;
std:: cout << "Fridge-Cubes: ";
userFridgeCubes = (userSodas / 24);
std:: cout << userFridgeCubes <<  std:: endl;
std:: cout << "Six-Packs: ";
userSixPacks = ((userSodas - ( 24 * userFridgeCubes)) / 6);
std:: cout << userSixPacks <<  std:: endl;
std:: cout << "Singles: ";
userSingles = ((userSodas - ( 24 * userFridgeCubes))) - ( userSixPacks * 6);
std:: cout << userSingles <<  std:: endl;

}

