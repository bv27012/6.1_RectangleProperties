// Comment here.

#include <iostream>
using namespace std;

void getLengthWidth(double& length, double& width)
{
	cout << "Enter a LENGTH and WIDTH for this rectangle: " << endl;
	cin >> length; 
	cin >> width;
	cout << endl;
}

double calcPerimeter(double length, double width)
{
	return 2 * (length + width);
}

double calcArea(double length, double width)
{
	return length * width;
}

void displayProperties(double length, double width)
{
	cout << "LENGTH: " << length << endl;
	cout << "WIDTH: " << width << endl;
	cout << "PERIMETER: " << calcPerimeter(length, width) << endl;
	cout << "AREA: " << calcArea(length, width) << endl;
}

int main()
{
	double length, width;

	getLengthWidth(length, width);
	displayProperties(length, width);

	return 0;

}

