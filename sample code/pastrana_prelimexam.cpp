#include <iostream>

using namespace std;

struct student {
	string name;
	int studentID;
	float grades [5];
};
 void getInput (student &pupil);
 void printStudent (student &pupil);
 
 int main (){
 	
 	student pupil1,pupil2,pupil3,pupil4,pupil5;
 	getInput (pupil1);
 	getInput (pupil2);
 	getInput (pupil3);
 	
 	cout << "Student 1 info"<<endl;
 	printStudent (pupil1);
 	cout << "Student 2 info"<<endl;
 	printStudent (pupil2);
 	cout << "Student 3 info"<<endl;
 	printStudent (pupil3);
 	
 	return 0; 
 }
 
 void getInput (student &pupil){
 	cout << "Student name: ";
 	getline (cin,pupil.name);
 	cout << "student ID: ";
 	cin >>pupil.studentID;
 	cin.ignore();
 	cout<< "Enter student grades on Five Subjects: ";
 	cin >> pupil.grades [0];
 	cin >> pupil.grades [1];
 	cin >> pupil.grades [2];
 	cin >> pupil.grades [3];
 	cin >> pupil.grades [4];
 	cin.ignore();
 }
 	void printStudent (student &pupil){
 	 float grades,average;
 	 
 	 cout << "student name: "<<pupil.name<<endl;
	 cout << "student number: "<<pupil.studentID<< endl;
	 
   grades = pupil.grades [0]+ pupil.grades [1]+pupil.grades [2]+pupil.grades [3]+pupil.grades [4];
   average = grades/ 5;
   cout << "average: "<<average<< endl;
	 
	}
