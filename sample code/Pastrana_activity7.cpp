#include <iostream>

using namespace std;

struct student {
	//student info
	string name;
	int age;
	string course;
	int year;
	string block;
	string gender;
	
};

void getInput (student &pupil);
void printStudent (student &pupil);

int main (){
	student pupil1, pupil2;
	getInput (pupil1);
	getInput (pupil2);
	cout << "_______________________________"<<endl;
	cout<< "Student1 info"<<endl;
	printStudent(pupil1);
	cout << "_______________________________"<<endl;
	cout<< "Student2 info"<<endl;
	printStudent(pupil2);
	cout << "_______________________________"<<endl;
	return 0;
	
	
}

void getInput ( student &pupil){
	cout<< "Enter student info"<<endl;
	cout<< "Name: ";
	getline(cin,pupil.name);
	cout<< "age: ";
	cin>> pupil.age;
	cin.ignore();
	cout<< "course: ";
	getline(cin, pupil.course);
	cout<< "Year Level: ";
	cin>> pupil.year;
	cin.ignore();
	cout<< "Block: ";
	getline(cin,pupil.block);
	cout << "gender: ";
	getline(cin,pupil.gender);
	
	}
	
	void printStudent (student &pupil){
		cout<< "name: "<<pupil.name<<endl;
		cout<< "age: "<<pupil.age<<endl;
		cout<< "course: "<<pupil.course<<endl;
		cout<< "Year level: "<<pupil.year<<endl;
		cout<< "block: "<<pupil.block<<endl;
		cout<< "gender: "<<pupil.gender<<endl;
		
	}
