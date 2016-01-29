//
// Created by Paul Brown on 1/28/16.
//

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;


double computeArea( Point &a, Point &b, Point &c)
{
    double s = 0;           //holds value for semiperimeter
    double lengthA = 0;     //value of length a
    double lengthB = 0;     //value of length b
    double lengthC = 0;     //value of length c

    c.distanceTo(b);            //member function that calculates distance from Point C to Point B
    lengthA = c.distanceTo(b);  //inserts return value of distance into length of a

    a.distanceTo(c);            //member function that calculates distance from Point A to Point C
    lengthB = a.distanceTo(c);  //inserts return value of distance into length of b

    a.distanceTo(b);            //member function that calculates distance from Point A to Point B
    lengthC = a.distanceTo(b);  //inserts return value of distance into length of c

    s = (lengthA + lengthB + lengthC)/2;     //formula to calculate semiperimeter of triangle

    return sqrt(s * (s - lengthA) * (s - lengthB) * (s - lengthC));     //formula to calculate area of triangle
    //returns value to main


}