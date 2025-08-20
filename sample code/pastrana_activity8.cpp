#include <iostream>

using namespace std;

int add (int x, int y);
double add ( double x, double y);
int subtract (int x, int y);
double subtract( double x, double y);
int multiply(int x, int y);
double multiply( double x, double y);
int divide(int x, int y);
double divide ( double x, double y);
int rem (int x, int y);

int main (){
	cout << "add integer\n";
	cout << "2+3 : "<<add (2,3)<<endl;
	cout << "add double\n";
	cout << "2.5 + 3.5:"<<add(2.5,3.5)<<endl;
	cout << "subtract integer\n";
	cout << "2-3: "<<subtract(2,3)<<endl;
	cout << "subtract double\n";
	cout << "2.5-3.5: "<<subtract (2.5,3.5)<<endl;
	cout << "multiply integer\n";
	cout << "2*3: "<<multiply (2,3)<<endl;
	cout << "multiply  double\n";
	cout << "2.5*3.5: "<<multiply (2.5,3.5)<<endl;
	cout << "divide integer\n";
	cout << " 2/3: "<<divide  (2,3)<<endl;
	cout << "divide double\n";
	cout << " 2.5/3.5: "<<divide (2.5,3.5)<<endl;
	cout << "remainder integer\n";
	cout << "2%3: "<<rem (2,3)<<endl;
	
	return 0;
		
}

    int add (int x, int y){
    	return x+y;
	}
	double add (double x, double y){
		return x+y;
	}
	int subtract (int x, int y){
    	return x-y;
	}
	double subtract (double x, double y){
		return x-y;
	}
	int multiply (int x, int y){
    	return x*y;
	}
	double multiply (double x, double y){
		return x*y;
	}
	int divide(int x, int y){
    	return x/y;
	}
	double divide (double x, double y){
		return x/y;
	}
	int rem (int x, int y){
    	return x%y;
	}
	
