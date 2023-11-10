#ifndef Circle_H
#define Circle_H
class Circle
{
public:
double Diameter();
double Area();
double Circumference();
double GetRadius();
double GetX() const;
double GetY() const;
void setX(double X);
void setY(double Y);
double Distance() const;
bool setRadius(double R);
bool Intersect(const Circle& otherCircle) const;
private:
double Radius;
double XPos;
double YPos;

};
#endif