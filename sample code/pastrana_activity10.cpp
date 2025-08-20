#include <iostream>

using namespace std;

class student {
	public :
		string name;
		int age;
		string block;
		int year;
		
		student (string getName, int getAge, string getBlock,int getYear){
			cout << "_________"<<endl<< "Profile created"<< endl;
			cout<<"student info : "<<getName<<endl<<"age: "<<getAge<<endl<<"block: "<<getBlock<<endl<<"year: "<<getYear<<endl;
			
			
			
			name = getName;
			age= getAge;
			block = getBlock;
			year = getYear;
		}
};

int main (){
	string name;
	int age;
	string block;
	int year;
	
	cout << "student name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	cout << "block: ";
	cin >> block;
	cout << "year: ";
	cin >> year;
	
	student student1 (name,age,block,year);
	
	cout << "student name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	cout << "block: ";
	cin >> block;
	cout << "year: ";
	cin >> year;
	
	student student2 (name,age,block,year);
	
	cout << "student name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	cout << "block: ";
	cin >> block;
	cout << "year: ";
	cin >> year;
	
	student student3 (name,age,block,year);
	
	cout << "student name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	cout << "block: ";
	cin >> block;
	cout << "year: ";
	cin >> year;
	
	student student4(name,age,block,year);
	
	}
