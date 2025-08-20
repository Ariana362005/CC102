#include<iostream>
#include <queue>
using namespace std;

void addCustomer (queue <string> &customer){
	  string name;
	  getline (cin, name);
	  customer.push (name);
	  cout<< name << " " << "added to queue "<<endl;	
}
void serveCustomer (queue <string> &customer){
	  string name;
	  customer.pop ();
	  cout<<name<< " Serving"<<endl;
}
void displayCustomer (queue <string> customer){
	while (!customer.empty()){
		cout<< customer.front();
		customer.pop();
		
	}
}
    int main (){
	  int choice;
	  string name;
	  queue<string> customer;
	
	do {
	    cout<< "========Customer Support==========="<<endl;
		cout<< "1.Add customer\n";
		cout << "2. Serve Customer\n";
		cout<< "3.View customer Queue\n";
		cout<< "4.Exit \n";
		cout << "Enter your choosen number:";
		cin >> choice;
		cin.ignore();
		
		switch (choice){
		case 1: 
		    cout << "Enter name: ";
		    addCustomer (customer); 
		    break;
		
		case 2:
			serveCustomer (customer);
			cout << endl;
			break;
		case 3: 
		    displayCustomer (customer);
		    cout<<endl;
		    break;
		case 4:
			cout<< "Exiting Customer Support\n";
			break ;
		default:
			cout<<"Invalid Input\n";
			
		
		}
	} while (choice !=4);
	return 0;
	
	
}
