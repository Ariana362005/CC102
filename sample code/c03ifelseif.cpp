#include <iostream>

using namespace std;

int main () {
	char answer;
	cout<< "is it raining?[y=yes,n=no]:";
	cin>> answer;
	if(answer=='y') {
	cout << "get an umbrella.";
	}
	else if (answer=='n'){
		cout<< "it is sunny";
	}
	return 0;
}