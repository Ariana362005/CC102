#include <iostream>

using namespace std;

int main () {
	int age ;
	char answer;
	char time;
	
	
	cout<< "Please input Age\n"; //age of the customer
	cin >> age;
	cout<< "please enter the  time[m=manatee,e=evening]:"; //time of arrival at the movie 
	cin>> time;
	
	//ticket price
	if (time=='m'){
		cout<<"the prize will be $7.50"<<endl;
	}  
    else if (time=='e'){
		cout<< "the price will be $10.50"<<endl;
	}
	
	if (age<13){  //condition on what category they can watch based on their age and if there are parents with them
		
		cout<< "are you with a parent [y=yes,n=no]";
		cin>> answer;
	}
	 if (answer=='y'){
		cout<< "You Can watch G and Pg category"<<endl;
	}
	 if (answer=='n'){
		cout<<"you can only watch G category"<<endl;
	}
	else if  (age>13 && age <16){
		cout<< " You can watch G and Pg Category"<<endl;
		cout<< "But are you together with a parent? [o=yes,p=no]";
		cin>> answer;
	}
	if (answer=='o'){
		cout<< "Then you can watch G, PG, R category"<<endl;
	}
	else if (answer=='p'){
		cout<< "You can only watch G, Pg Category"<<endl;
	}
	if (age>=16){
		cout<< "You Can watch G,PG,R category"<<endl;
	}
	
	return 0;
}
	
	
	
	
