## Programming Assignment 1: Find the area of a 3D triangle

For this program, a 3D triangle is inputted by user, area is calculated and results outputted to user. 

## 3D Point Class

The 3D Point Class is created using the following functions and variables:
 
Class Point

Private:

double x, double y, and double z.

Public:

Point () as a default constructor
Point (double x, double y, double z) as a 3 argument constructor.
double distanceTo(Point &) as a one argument function to calculate the distance between two points. It accepts a Point object. 

Mutators

void setX(double newX);
void setY(double newY);
void setZ(double newZ);

Accessors
double getX();
double getY();
double getZ();

##IMPLEMENTATION

1. User inputs x, y, z values for a given point.
2. Inputs are inserted into the Point object.
3. Distance is calculated between two points by utilizing the distanceTo member function. Length for each side is assigned. 
4. computeArea function is called to determine the area of the 3D triangle by passing the values of length for a, b and c.
5. Area is outputted to user. 
6. Programs ends.

##COMPILER
CMAKE 3.3