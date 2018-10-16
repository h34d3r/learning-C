#include <iostream>

using namespace std;

int main()
{
	float x; // Defines a variable of the float type, which is called "x"

	cout<< "Please enter a number\n";
	cin>> x; // Reads an input from the user and assigns it's value to the previously defined variable
	cin.ignore();
	cout<< "You entered: "<< x <<"\n"; // Tells you what you entered
	cin.get();
}
