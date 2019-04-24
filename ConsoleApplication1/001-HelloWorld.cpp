#include "pch.h" // header files are included using double quotes ""
#include <iostream>

void doNothing(const int &x); // forward declaration

void TestPrint() //TestPrint
{
	std::cout << "Hello World!\n";
	int x; //uninitialized variable.

	doNothing(x);

	std::cout << x; //This would not be permitted without the doNothing(x) function above.
}

// Makes compiler think we're using this variable in order to print its uninitialized value.
void doNothing(const int &x)
{ }