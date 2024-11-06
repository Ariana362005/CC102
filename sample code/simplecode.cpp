//simpple program
#include <iostream>

using namespace std;

int main () {
	// constant declarataion
	const double Pi =3.14159;
	// variable declaration
	double radius;
	double area;
	
	// assignment statement
	
	cout<< "enter circle radius:";
	cin>> radius;
	area=Pi*radius* radius;
	
	cout<< "Area : "<< area << endl;
	
	return 0;
}