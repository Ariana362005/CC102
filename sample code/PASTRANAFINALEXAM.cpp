#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main (){
	
	string Myname;
	string Myage;
	string Mygender;
	string Myblock;
	
	ofstream MyFile("UsersFile.txt",ios::app);
	
	cout<< "Please input the following\n";
	cout<< "Name: ";
	getline (cin,Myname);
	cout<< "Age: ";
	getline (cin,Myage);
	cout<< "Gender: ";
	getline(cin,Mygender);
	cout<< "Block: ";
	getline(cin,Myblock);
	cin.ignore();
	
	time_t now = time(0);
    char*timeStr = ctime(&now);
    
    MyFile<< "Name: " << Myname << endl;
    MyFile<< "Age: " <<Myage<<endl;
    MyFile<< "Gender: " << Mygender << endl;
    MyFile<< "Block: " <<Myblock<<endl;
    MyFile<< "Time: " << timeStr<< endl;
    MyFile<< "----------------------" << endl;
    
    MyFile.close();
    
    cout << "*******************************************"<<endl;
	cout << "Good Day "<< Myname<<endl;
    cout << "Your details such as\n";
    cout << "- "<<Myage<<endl;
    cout << "- "<<Mygender<<endl;
    cout << "- "<<Myblock<<endl;
    cout << "Has been save on UsersFile.txt"<<endl;
    
    return 0;
	
	
	
}
