#include <iostream>
using namespace std;

void instructions( ); // This function describes the program and how it works
int menu( ); // This function will return a choice to the main ; 1) draw triangle, 2) draw diamond, 3) draw inverted triangle, 4) draw side-way triangle and 5) quit
void draw_shape(int choice); // This function calls on appropriate function depending on the choice to draw a shape
int get_size (); // This function will return the size of the shape, same function for all of the shapes choices
int get_char (); // This function will ask users to select a character that will be used to draw the shape
void draw_triangle (char symbol, int size); // This function draws a triangle of size size using character symbol
void draw_diamond (char symbol, int size); // This function first calls draw_triangle, then add draw_bottom to draw the diamond
void draw_bottom(char symbol, int size); // This function actually draws an upside down triangle of size size-1 as the bottom of the diamond
void draw_invert_triangle (char symbol, int size); // This function draws an inverted triangle of size size using character symbol
void draw_side_way_triangle (char symbol, int size); // This function draws a side-way triangle of size size using character symbol

int main ()
{
    instructions (); // How the program runs 

    return 0;
}

void instructions ()
{
    int choice = menu (); // Call for a choice value from menu function
    draw_shape (choice); // This function draw the shape that correspond to the user's choice 
    return;
}

int menu( ) // Ask user what they would like to draw and return a choice value
{
    int choice;
    string a = "1. Triangle", b = "2. Diamond", c = "3. Inverted Triangle", d = "4. Side Way Triangle";

    do { // If user choose a number outside the choice range, the program will rerun

    cout << "What would you like to draw? \n";
    cout << "Enter the number that corresponds to your choice. \n";
    cout << a << endl << b << endl << c << endl << d << endl;
    cout << endl;
    cin >> choice;
    cout << endl; 

    if (choice < 1 || choice > 4)
    {
        cout << "You have entered an invalid value and choose to quit. If you've changed your mind, please retry. ";
    }

    } while (choice < 1 || choice > 4);

    
    return choice;
}

void draw_shape (int choice) // This function calls for other function to draw the shape based on the user's choice
{
    int size = get_size (); // Get a size value from user by calling get_size () function
    char symbol = get_char(); // Get a symbol character from user by calling get_char () function

    string a = "1. Triangle", b = "2. Diamond", c = "3. Inverted Triangle", d = "4. Side Way Triangle"; // Define all the possible choices for different shapes 

        if (choice == 1) // If user choose 1, the program will output a triangle 
    {
        cout << "Just to confirm, you have chosen to draw choice "<< a << " with a size of " << size << " using the symbol "<< symbol << "." << endl;
        cout << "Here is your shape! \n";
        cout << endl;
        draw_triangle (symbol,size);
    }

    else if (choice == 2) // If user choose 2, the program will output a diamond
    {
        cout << "Just to confirm, you have chosen to draw choice "<< b << " with a size of " << size << " using the symbol "<< symbol << "." << endl;
        cout << "Here is your shape! \n";
        cout << endl;
        draw_diamond (symbol, size);
    }

    else if (choice == 3) // If user choose 3, the program will output an inverted triangle
    {
        cout << "Just to confirm, you have chosen to draw choice "<< c << " with a size of " << size << " using the symbol "<< symbol << "." << endl;
        cout << "Here is your shape! \n";
        cout << endl;
        draw_invert_triangle (symbol, size);
    }

    else if (choice == 4) // If user choose 4, the program will output a side-way triangle
    {
        cout << "Just to confirm, you have chosen to draw choice "<< d << " with a size of " << size << " using the symbol "<< symbol << "." << endl;
        cout << "Here is your shape! \n";
        cout << endl;
        draw_side_way_triangle (symbol, size);
    }

    return;
}

int get_size()
{
    int size;
    cout << "What size would you like the shape to be? \n"; // Asking user what size they would like to draw the shape
    cin >> size;
    return size;
}

int get_char ()
{
    char symbol;
    cout << "What symbol would you like to draw the shape with? \n"; // Asking user for the symbol they want to use to draw the shape
    cin >> symbol;
    return symbol;
}

void draw_triangle (char symbol, int size) // This function draws a triangle of size size using character symbol
{
       for (int i = 1; i <= size; i++)
    {
        for (int k = size - i; k>0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j<= i*2-1; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
    return;
}

void draw_bottom (char symbol, int size) // This function draws an upside down triangle of size size-1 as the bottom of the diamond with character symbol
{
        for (int i = 1; i < size; i++)
    {
        for (int k = size - i; k < size; k++)
        {
            cout << " ";
        }
        for (int j = (size-i)*2-1; j>0; j--)
        {
            cout << symbol;
        }
        cout << endl;
    }
    return;
}

void draw_diamond (char symbol, int size) // This function draws a diamond with the character symbol and size size by calling the triangle function first then the draw-bottom
{
    draw_triangle (symbol,size);
    draw_bottom (symbol, size);
    return;
}

void draw_invert_triangle (char symbol, int size) // This function draws an inverted triangle with the character symbol and size size
{
        for (int i = 1; i <= size; i++)
    {
        for (int k = i - 1; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = ((size-i)+1)*2-1; j > 0; j--)
        {
            cout << symbol;
        }
        cout << endl;
    }
    return;
}


void draw_side_way_triangle (char symbol, int size) // This function draws a side-way triangle with the character symbol and size size
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    for (int i = 1; i < size; i++)
    {
        for (int j = (size-i); j>0; j--)
        {
            cout << symbol;
        }
        cout << endl;
    }
    return;
}
