// This program calculates the properties of a rectangle.

#include <iostream>
#include <string>
using namespace std;

void getLengthWidth(double& length, double& width) // Takes inputs for doubles length and width.
{
	cout << "Enter a LENGTH and WIDTH for this rectangle: " << endl;
	cin >> length;
	cin >> width;
	cout << endl;

	if (length <= 0 || width <= 0)
	{
		cout << "ERROR: non-positive values are invalid. Try again: " << endl;
		cin >> length;
		cin >> width;
		cout << endl;
	}


}

double calcPerimeter(double length, double width) // Takes length and width and multiplies the product by two.
{
	return 2 * (length + width);
}

double calcArea(double length, double width) // Takes length and width and multiples them together.
{
	return length * width;
}

void displayProperties(double length, double width) // Calls all above functions.
{
	cout << "LENGTH: " << length << endl;
	cout << "WIDTH: " << width << endl;
	cout << "PERIMETER: " << calcPerimeter(length, width) << endl;
	cout << "AREA: " << calcArea(length, width) << endl;
	cout << endl;
}

int main()
{
	double length, width;
	string choice;

	while (true)
	{
		cout << "Enter START or QUIT" << endl;
		cin >> choice;

		if (choice == "QUIT" || choice == "quit")
		{
			cout << endl << "Quitting program." << endl;
			break;
		}
		
		if (choice == "START" || choice == "start")
		{
			cout << "Beginning program." << endl << endl;

			getLengthWidth(length, width);
			displayProperties(length, width);
		}
	}

	return 0;
}
