#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
using namespace std;

struct Contact{
	string name;
	string phoneNum;
	string email;
	string photo;
};

int main(){
	map<string, Contact> phoneBook;
	int choice = 0;
	while(choice != 5){
		cout << "menu" << endl;
		cout << "1. add contact" << endl;
		cout << "2. remove contact" << endl;
		cout << "3. search contact" << endl;
		cout << "4. display contact" << endl;
		cout << "5. exit" << endl;
		cout << "enter choice: ";
		cin >> choice;
		
		if(choice == 1){
			Contact newContact;
			cout << "enter name: ";
			cin >> newContact.name;
			cout << "enter phone number: ";
			cin >> newContact.phoneNum;
			cout << "enter email: ";
			cin >> newContact.email;
			cout << "enter photo: ";
			cin >> newContact.photo;
			phoneBook[newContact.name] = newContact;
			cout << "contact added" << endl;
		} else if(choice == 2){
			string nameToRemove;
			cout << "enter name of contact to remove: ";
			cin >> nameToRemove;
			if(phoneBook.count(nameToRemove)){
				phoneBook.erase(nameToRemove);
				cout << "contact deleted" << endl;
			} else {
				cout << "name invalid" << endl;
			}
		} else if(choice == 3){
			string nameToSearch;
			cout << "enter name of contact: ";
			cin >> nameToSearch;
			if(phoneBook.count(nameToSearch)){
				Contact contact = phoneBook[nameToSearch];
				cout << "name: " << contact.name << endl;
				cout << "phone number: " << contact.phoneNum << endl;
				cout << "email: " << contact.email << endl;
				cout << "photo: " << contact.photo << endl;
			} else {
				cout << "name invalid" << endl;
			}
		} else if(choice == 4){
			for (const auto& pair : phoneBook) {
    			const auto& name = pair.first;
    			const auto& contact = pair.second;
			
    			cout << endl << "name: " << name << endl;
    			cout << "phone number: " << contact.phoneNum << endl;
    			cout << "email: " << contact.email << endl;
    			cout << "photo: " << contact.photo << endl << endl;
			}
		} else if(choice == 5){
			cout << "exiting phone book..." << endl;
		} else {
			cout << "choice invalid" << endl;
		}
	}
	
	return 0;
}
