#include <iostream>
using namespace std;

class student {
	private : 
	string name;
	int age;
	string gender;
	string block;
	int year;
	
	public:
		
		void setName (string str){
			name= str;
		}
		void setAge(int str){
			age= str;
	    }
		void setGender (string str){
			gender= str;
		}
		void setBlock (string str){
			block= str;
		}
		void setYear(int str){
			year = str;
		}
		string getName (){
			return name;
		}
		int getAge (){
			return age;
		}
		string getGender (){
			return gender;
		}
		string getBlock (){
			return block;
		}
	    int  getYear(){
			return year;
		}
		
		};
		
		int main (){
			string name;
			int age;
			string gender;
			string block;
			int year;
			
			cin >> name;
			cin >> age;
			cin >> gender;
			cin >> block;
			cin >> year;
			
			student pupil1;
			
			pupil1.setName(name);
			pupil1.setAge(age);
			pupil1.setGender (gender);
			pupil1. setBlock(block);
			pupil1.setYear(year);
			
			cout << pupil1.getName()<<endl;
			cout << pupil1.getAge()<<endl;
			cout << pupil1.getGender()<<endl;
			cout << pupil1.getBlock()<<endl;
			cout << pupil1.getYear()<<endl; 
			
			cin >> name;
			cin >> age;
			cin >> gender;
			cin >> block;
			cin >> year;
			
			student pupil2;
			
			pupil2.setName(name);
			pupil2.setAge(age);
			pupil2.setGender (gender);
			pupil2. setBlock(block);
			pupil2.setYear(year);
			
			cout << pupil2.getName()<<endl;
			cout << pupil2.getAge()<<endl;
			cout << pupil2.getGender()<<endl;
			cout << pupil2.getBlock()<<endl;
			cout << pupil2.getYear()<<endl; 
			
			cin >> name;
			cin >> age;
			cin >> gender;
			cin >> block;
			cin >> year;
			
			student pupil3;
			
			pupil3.setName(name);
			pupil3.setAge(age);
			pupil3.setGender (gender);
			pupil3. setBlock(block);
			pupil3.setYear(year);
			
			cout << pupil3.getName()<<endl;
			cout << pupil3.getAge()<<endl;
			cout << pupil3.getGender()<<endl;
			cout << pupil3.getBlock()<<endl;
			cout << pupil3.getYear()<<endl; 
			
			cin >> name;
			cin >> age;
			cin >> gender;
			cin >> block;
			cin >> year;
			
			student pupil4;
			
			pupil4.setName(name);
			pupil4.setAge(age);
			pupil4.setGender (gender);
			pupil4. setBlock(block);
			pupil4.setYear(year);
			
			cout << pupil4.getName()<<endl;
			cout << pupil4.getAge()<<endl;
			cout << pupil4.getGender()<<endl;
			cout << pupil4.getBlock()<<endl;
			cout << pupil4.getYear()<<endl; 
		}
