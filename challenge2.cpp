/* Write a single C++ statement or line that accomplishes each of the following: */
// Print the message "Enter two numbers".

//Assign the product of variables b and c to variable a.

/* State that a program performs a payroll calculation (i.e., use text that helps to document
a program) */

// Input three integer values from the keyboard into integer variables a, b and c.
#include <iostream>
using namespace std;
// This program performs a simple payroll calculation based on input values.
int main() {
    int a, b, c;
    std::cout << "Enter two numbers:  ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    a = b * c;



//This program calculates the product of three integers.

// Integers used in calculating.
int x (0);
int y (0);
int z (0);
int result (0);
// User prompted to input integers.
std::cout << "Enter three integers: ";
std::cin >> x;
std::cin >> y;
std::cin >> z;
// Calculation.
result = x * y * z;
// Result of calculation shown to user.
std::cout<< "The product is " << result << std::endl;


return 0;
}

/* Using the statements you wrote above, write a complete program that calculates
and displays the product of three integers. Add comments to the code where appropriate.
[Note:You’ll need to write the necessary using declarations or directive.] */
