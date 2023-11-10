#include <iostream>
#include <math.h>
#include "Circle.h"
#include "CircleDriver.h"

double Circle::Diameter()
 {
 double userDiameter = 0;
 userDiameter = (2 * Radius);
 return(userDiameter);
 }
double Circle::Area()
 {
 double userArea = 0;
 userArea = (M_PI * Radius * Radius);
 return(userArea);
 }
double Circle::Circumference()
 {
 double userCircumference = 0;
 userCircumference = (2 * M_PI * Radius);
 return(userCircumference);
 }
double Circle::GetRadius()
 {
 return(Radius);
 }
double Circle::GetX() const
 {
 return(XPos);
 }
double Circle::GetY() const
 {
 return(YPos);
 }
void Circle::setX(double X)
 {
 XPos = X;
 }
void Circle::setY(double Y) 
 {
 YPos = Y;
 }
double Circle::Distance() const
 {
 double Dis = 0;
 Dis = sqrt((pow(XPos - 0, 2)) + (pow(YPos - 0, 2)));
 return(Dis);
 }
bool Circle::setRadius(double R)
{
 if (R > 0)
 {
   Radius = R;
   return(true);
 }
 else 
 {
   Radius = 0;
   return(false);
 }
}
bool Circle::Intersect(const Circle& otherCircle) const
 {
   double TotalDistance = 0;
   double TotalRadius = 0;
   TotalDistance = sqrt((pow(XPos-otherCircle.XPos, 2)) + (pow(YPos-otherCircle.YPos, 2)));
   TotalRadius = Radius + Radius;
   if (TotalDistance < TotalRadius)
   {
    return(true);
   }
   else
   {
    return(false);
   }
 }

