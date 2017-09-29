/*******************************************************************************************************************************************************
 *Purpose:  This program displays the radius, diameter, area, and circumference of a circle. Also it asks the user to enter the radius they want.      *
 *Implemented by: Antonio Monje
 *Date: 12/7/2015                                                                                                                                      *
 *User Information: The inputs are the information that the user inputs for what they want.
 *FUNCTIONS: theay are the class and radius, area, circumference, and diameter.                                                                        *                                            
********************************************************************************************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

class Circle
{
 private:
  double radius;
  double pi;
 public:
  Circle();
  Circle(double radius2);
  void setRadius(double newR);
  double getRadius();
  double getArea();
  double getDiameter();
  double getCircumference();
};

Circle::Circle()
{
  radius = 0.0;
  pi = 3.14;
}

Circle::Circle(double radius2)
{
  radius = radius2;
  pi = 3.14;
}

void Circle::setRadius(double newR)
{
  radius = newR;
}

double Circle::getRadius()
{
  return radius;
}

double Circle::getArea()
{
  return pi*radius*radius;
}

double Circle::getDiameter()
{
  return radius*2;
}

double Circle::getCircumference()
{
  return 2*pi*radius;
}


int main()
{ 
  double radius2;
  double newR;
  //cout << "Enter a radius for c1 ";
  //cin >> newR;
  //Circle c1;
   cout << "Enter a radius for c2 ";
  cin >> radius2;
  Circle c2(radius2);
  
  // cout << "The c1's radius is " << c1.getRadius() << endl;
  //c1.setRadius(newR);
  //  cout << "The c1's new radius is " << c1.getRadius() << endl;
  cout << "The c2's Area is " << c2.getArea() << endl;
  cout << "The c2's diameter is " << c2.getDiameter() << endl;
  cout << "The c2's circumference is " << c2.getCircumference() << endl; 
  return 0;
}
