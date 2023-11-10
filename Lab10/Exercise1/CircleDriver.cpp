#include <iostream>
#include <math.h>
#include "Circle.h"
#include "CircleDriver.h"
double X1;
double X2;
double Y1;
double Y2;
double R1;
double R2;
Circle Circ1;
Circle Circ2;

void CircleDriver::ObtainCircles()
{
while (R1 <= 0)
{
 std:: cout << "Radius for Circle 1: ";
 std:: cin >> R1;
 Circ1.setRadius(R1);
}
std:: cout << "X Position for Circle 1: ";
std:: cin >> X1;
Circ1.setX(X1);
std:: cout << "Y Position for Circle 1: ";
std:: cin >> Y1;
Circ1.setY(Y1);
std:: cout << std:: endl;

while (R2 <= 0)
{
 std:: cout << "Radius for Circle 2: ";
 std:: cin >> R2;
 Circ2.setRadius(R2);
}
std:: cout << "X Position for Circle 2: ";
std:: cin >> X2;
Circ2.setX(X2);
std:: cout << "Y Position for Circle 2: ";
std:: cin >> Y2;
Circ2.setY(Y2);
std:: cout << std:: endl;
}
void CircleDriver::PrintCirclesInfo()
{
 std:: cout << "Information for Circle 1: " << std:: endl;
 std:: cout << "Radius: " << Circ1.GetRadius() << std:: endl;
 std:: cout << "Location: " << "(" << Circ1.GetX() << "," << Circ1.GetY() << ")" << std:: endl;
 std:: cout << "Diameter: " << Circ1.Diameter() << std:: endl;
 std:: cout << "Area: " << Circ1.Area() << std:: endl;
 std:: cout << "Circumference: " << Circ1.Circumference() << std:: endl;
 std:: cout << "Distance from the origin: " << Circ1.Distance() << std:: endl;
 std:: cout << std:: endl;

 std:: cout << "Information for Circle 2: " << std:: endl;
 std:: cout << "Radius: " << Circ2.GetRadius() << std:: endl;
 std:: cout << "Location: " << "(" << Circ2.GetX() << "," << Circ2.GetY() << ")" << std:: endl;
 std:: cout << "Diameter: " << Circ2.Diameter() << std:: endl;
 std:: cout << "Area: " << Circ2.Area() << std:: endl;
 std:: cout << "Circumference: " << Circ2.Circumference() << std:: endl;
 std:: cout << "Distance from the origin: " << Circ2.Distance() << std:: endl;
 std:: cout << std:: endl;

 if (Circ1.Intersect(Circ2))
 {
   std:: cout << "The 2 circles intersect!" << std:: endl;
 }
 else 
 {
   std:: cout << "The 2 circles don't intersect!" << std:: endl;
 } 
}
void CircleDriver::Run()
{
   ObtainCircles();
   PrintCirclesInfo();
}