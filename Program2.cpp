//**********************************************************************
//*                                                                    *
//* This program calculates a circle's, reactangle's, and rectangular  *
//* solid's areas and volumes and prints these dimensions.             *
//*                                                                    *
//**********************************************************************

#include <iostream>
using namespace std;

//**********************************************************************
//*                         Symbolic Constants                         *
//**********************************************************************
#define COURSE_NUMBER  "CS246"   // PCC assigned course number
#define COURSE_NAME    "Object-Oriented Programming and Design"
                                 // PCC assigned course name
#define PROGRAM_NUMBER 2         // Teacher assigned program number
#define PI             3.141593f // Mathematical constant PI

//**********************************************************************
//*                        Function Prototypes                         *
//**********************************************************************
void print_heading();
// Prints the program heading
void get_dimensions(float *p_depth, float *p_diameter, float *p_length, float *p_width);
// Gets the dimensions for the geometric shapes
void geometric_shape_calculation(float diameter);
// Calculates the area of the circle
void geometric_shape_calculation(float length, float width);
// Calculates the area of the rectangle
void geometric_shape_calculation(float length, float width, float depth);
// Calculates the volume of the rectangular solid

//**********************************************************************
//*                           Main Function                            *
//**********************************************************************
int main()
{
   float depth,    // Depth of the rectangular solid
         diameter, // Diameter of the circle
         length,   // Length of the rectangle
         width;    // Width of the rectangle

   // Prints the program heading
   print_heading();

   // Gets the dimensions for the geometric shapes
   get_dimensions(&depth, &diameter, &length, &width);

   // Calculates the area and the volume of the geometric shapes
   cout << "\n\nHere are the requested areas and volume:";
   cout <<   "\n----------------------------------------";
   geometric_shape_calculation(diameter);
   geometric_shape_calculation(length, width);
   geometric_shape_calculation(length, width, depth);

   // Says goodbye and terminates the program
   cout << "\n\n\nThanks for calculating geometric shapes today ;)";
   cout << "\n\n\n\n\n\n\n";
   return 0;
}

//**********************************************************************
//*                     Prints the program heading                     *
//**********************************************************************
void print_heading()
{
   cout << "\n\n\n\n\n\n\n\n" << COURSE_NUMBER
        << " "                << COURSE_NAME
        << " - Program "      << PROGRAM_NUMBER;
   cout << "\n========================================================";
   cout << "\n       Calculate geometric shape areas and volume";
   return;
}

//**********************************************************************
//*            Gets the dimensions for the geometric shapes            *
//**********************************************************************
void get_dimensions(float *p_depth, float *p_diameter, float *p_length, float *p_width)
{
   cout << "\n\n\nEnter the geometric shape dimensions as follows:";
   cout <<     "\n    Circle diameter: ";
   cin  >> *p_diameter;
   cout <<       "   Rectangle length: ";
   cin  >> *p_length;
   cout <<       "    Rectangle width: ";
   cin  >> *p_width;
   cout <<       "    Rectangle depth: ";
   cin  >> *p_depth;
   return;
}

//**********************************************************************
//*            Calculates and prints the area of the circle            *
//**********************************************************************
void geometric_shape_calculation(float diameter)
{
   cout << "\nArea of a circle with diameter " << diameter
        << ":";
   cout << "\n   "                             << 0.25f * PI * diameter * diameter
        << " square units";
   return;
}

//**********************************************************************
//*          Calculates and prints the area of the rectangle           *
//**********************************************************************
void geometric_shape_calculation(float length, float width)
{
   cout << "\nArea of a rectangle of length " << length
        << " by with "                        << width          << ":";
   cout << "\n   "                            << length * width
        << " square units";
   return;
}

//**********************************************************************
//*     Calculates and prints the volume of the rectangular solid      *
//**********************************************************************
void geometric_shape_calculation(float length, float width, float depth)
{
   cout << "\nVolume of a rectangular solid of length " << length
        << ", width "                                   << width
        << ", depth "                                   << depth << ":";
   cout << "\n   "                                      << length * width * depth
        << " cubic units";
   return;
}