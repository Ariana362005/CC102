#include <iostream>

using namespace std;

int main () {
	char answer;
	cout<< "is it raining?[y=yes,n=no]:";
	cin>> answer;
	if(answer=='y') {
	cout << "get an umbrella.";
	cout << "Rainfall warning[r=red, o=orange,y=yellow]";
	cin>> answer;
	}
	if(answer=='r'){
		cout<< "extreme:landslide and flooding are immenent.";
	}
	else if(answer=='o'){
		cout<< "serious: expected flooding";
	}
	else if(answer=='y'){
		cout<< "Moderate:Possible Flooding";
	}

	else{
		cout<< "invalid input.";
	}
	return 0;
}