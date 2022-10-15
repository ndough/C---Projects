/* 
Nina Do
Id: 21001698
Written Date: Sept 29, 2022
Due Date: Oct 4,2022
Course: SYDE 121
Lab Room: DC1350
Assignment Number: 3
Exercise Number: Part 1
File Name: assignment3_part1_Nina_Do.cpp,
C++ Project: Assignment 3.1
*/

// Description: Asks user to choose between sphere or cylinder and output the volume and area of the shape in inches based on their choice.
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358; // Define global constant for pi
const double conversion = 0.3937; // This is the Cm to inch conversion factor
double area(double r, double h); // Function declaration for function that computes side area of the cylinder
double area(double r, double h, double side_area); // Function declaration for function that computes total area of the cylinder
double area (double r); // Function declaration for the function that computes surface area of the sphere
double volume (double r, double h); // Function declaration for the function that computes volume of the cylinder
double volume (double r); // Function declaration for the function that computes volume of the sphere

int main(void)
{
    int choice; //variable for user to choose between 1 or 2
    double h, r; //variables local to the main function
    double side_area; // variable for total area function

    do
    {
        cout << "Would you like to choose cylinder or sphere. Enter 1 for cylinder or 2 for sphere.";
        cin >> choice;
    
    if (choice == 1)
    {
        cout << "Please enter the radius and the height of the cylinder in Cm <Enter> ";
        cin >> r >> h;
        cout << endl;
        cout << "Before I do any computation or call any function, I want to let you know that \n";
        cout << "you have entered r = " << r << " and h = " << h << "." << endl;
        cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
        cout << "in the second one I will convert h \n";
        cout << "The side area of the cylinder is " << area(r,h) << " inch-sqr" << endl; // overloading for area function
        cout << "The total area of the cylinder is " << area(r,h,side_area) << " inch-sqr" << endl; // overloading for area function
        cout << "The volume of the cylinder is " << volume(r,h) << " inch-cubed \n\n"; // overloading for volume function
    }

        else if (choice == 2)
    {
        cout << "Please enter the radius of the sphere in Cm <Enter> ";
        cin >> r;
        cout << endl;
        cout << "Before I do any computation or call any function, I want to let you know that \n";
        cout << "you have entered r = " << r << "." << endl;
        cout << "I am planning to use inch, thus in the first function, I will convert r." << endl;
        cout << "The surface area of the cylinder is " << area(r) << " inch-sqr" << endl; // overloading for area function
        cout << "The volume of the sphere is " << volume(r) << " inch-cubed \n\n"; // overloading for volume function
        
    }

    else
    {
        cout << "Invalide choice error. ";
    }

    } while (choice < 1 || choice > 2);

    return 0;
    } 

    double area(double r, double h) // overloading happens for area for 2 parameters
    {
    h = h * conversion; // converting h to inch
    r = r * conversion; // converting r to inch
    return 2*PI*r*h;
    }
    
    double area(double r, double h, double side_area) // overloading happens for area for 3 parameters
    {
        
    h = h * conversion; // converting h to inch
    r = r * conversion; // converting r to inch 
    side_area = 2*PI*r*h;
    return 2*(PI*pow(r,2)) + (side_area);
    }

    double area (double r) // overloading happens for area for 1 parameter
    {
    // Function for surface area of the sphere
    r = r * conversion; // converting r to inch
    return 4*PI*pow(r,2);
    }

    double volume (double r, double h) // overloading happens for area for 2 parameters
    {
    h = h * conversion; // converting h to inch
    r = r * conversion; // converting r to inch
    return PI*pow(r,2)*h;
    }

    double volume (double r) // overloading happens for area for 1 parameter
    {
    //Cross secion area includes the disks at the bottom and the top
    r = r * conversion; // converting r to inch
    return (PI*pow(r,3)*4)/3;
    }

