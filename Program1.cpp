//**********************************************************************
//*                                                                    *
//* This program asks for the length and width of a rectangle,         *
//* calculates its area and perimeter, draws a picture of the          *
//* rectangle, and prints its specifications.                          *
//*                                                                    *
//**********************************************************************

#include <iostream>
using namespace std;

//**********************************************************************
//*                         Symbolic Constants                         *
//**********************************************************************
#define COURSE_NUMBER    "CS246" // PCC assigned course number
#define MIN_RECT_LENGTH  1.0f    // Minimum rectangle length
#define MIN_RECT_WIDTH   1.0f    // Minimum rectangle width
#define RECTANGLE_BORDER '*'     // Rectangle border
#define RECTANGLE_CENTER ' '     // Rectangle area display
#define SCALE_FACTOR     1.5f    // Rectangle length scale factor
#define COURSE_NAME      "Object-Oriented Programming and Design"
                                 // PCC assigned course name
#define PROGRAM_NUMBER   1       // Teacher assigned program number

//**********************************************************************
//*                          Program Structures                        *
//**********************************************************************
// Specifications for the rectangle
struct rectangle
{
   float area,      // Area of the rectangle
         length,    // Length of the rectangle
         perimeter, // Perimeter of the rectangle
         width;     // Width of the rectangle
};

//**********************************************************************
//*                        Function Prototypes                         *
//**********************************************************************
void print_heading();
   // Prints the program heading
void get_rectangle(rectangle *rectangle);
   // Gets the dimensions of the rectangle
void draw_rectangle(float f_length, float f_width);
   // Draws a picture of the rectangle
void print_rectangle_specs(rectangle rectangle);
   // Prints the specifications of the rectangle

//**********************************************************************
//*                           Main Function                            *
//**********************************************************************
int main()
{
   // Specifications for the rectangle
   rectangle rectangle;

   // Prints the program heading
   print_heading();

   // Gets the dimensions of the rectangle and calculates are and perimeter
   get_rectangle(&rectangle);

   // Draws a picture of the rectangle and prints the rectangle specifications
   draw_rectangle(rectangle.length, rectangle.width);
   print_rectangle_specs(rectangle);

   // Says goodbye and terminates the program
   cout << "\n\nThanks for drawing a rectangle today ;)";
   cout << "\n\n\n\n\n\n";
   return 0;
}

//**********************************************************************
//*                     Prints the program heading                     *
//**********************************************************************
void print_heading()
{
   cout << "\n\n\n\n\n\n        " << COURSE_NUMBER
        << " "                    << COURSE_NAME
        << " - Program "          << PROGRAM_NUMBER;
   cout <<         "\n\n                     This program draws a rectangle";
   cout <<           "\n                     ==============================";
   return;
}

//**********************************************************************
//*    Gets the dimensions of the rectangle and calculates are and     *
//*                             perimeter                              *
//**********************************************************************
void get_rectangle(rectangle *rectangle)
{
   cout << "\n\n\nEnter the rectangle length now: ";
   cin  >> rectangle->length;
   cout << "Enter the rectangle width here: ";
   cin  >> rectangle->width;

   rectangle->area      = (rectangle->length * rectangle->width);
   rectangle->perimeter = ((rectangle->length + rectangle->width) * 2.0f);

   return;
}

//**********************************************************************
//*                  Draws a picture of the rectangle                  *
//**********************************************************************
void draw_rectangle(float f_length, float f_width)
{
   int columns,  // Counts each column as it is printed
       i_length, // Integer form of the rectangle length
       i_width,  // Integer form of the rectangle width
       rows;     // Counts each row as it is printed

   // Checks for the minimum size rectangle dimensions
   if ((f_length < MIN_RECT_LENGTH) || (f_width < MIN_RECT_WIDTH))
   {
      cout << "\nA "                        << f_length
           << " by "                        << f_width
           << " rectangle is too small to draw.";
      cout << "\nIt must be at least size " << MIN_RECT_LENGTH
           << " by "                        << MIN_RECT_WIDTH
           << " (length by width).";
   }
   else
   {

      // Converts the rectangle dimensions into whole numbers and scales the
      // length for the correct proportional picture
      i_length = (int)(f_length * SCALE_FACTOR);
      i_width  = (int)f_width;

      // Prints the rectangle title
      cout << "\n\nHere is a picture of your rectangle:";

      // Prints the top row of the rectangle
      cout << "\n";
      for (columns = 1; columns <= i_length; columns++)
         cout << RECTANGLE_BORDER;

      // Prints the middle rows of the rectangle
      for (rows = 1; rows <= (i_width - 2); rows++)
      {
         cout << "\n" << RECTANGLE_BORDER;
         for (columns = 1; columns <= (i_length - 2); columns++)
            cout << RECTANGLE_CENTER;
         cout << RECTANGLE_BORDER;
      }

      // Prints the bottom row of the rectangle
      cout << "\n";
      if (i_width > 1)
         for (columns = 1; columns <= i_length; columns++)
            cout << RECTANGLE_BORDER;
   }
   return;
}

//**********************************************************************
//*            Displays the specifications of the rectangle            *
//**********************************************************************
void print_rectangle_specs(rectangle rectangle)
{
   cout << "\n\nThe rectangle specifications are:";
   cout << "\n        Length = " << rectangle.length    << " units";
   cout << "\n         Width = " << rectangle.width     << " units";
   cout << "\n          Area = " << rectangle.area      << " sq. units";
   cout << "\n     Perimeter = " << rectangle.perimeter << " units";
   return;
}
