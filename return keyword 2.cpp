#include <iostream>
using namespace std;

string concatStrings(string string1, string string2);

int main(){
	
	string firstname;
	string lastname; 

	cout << "Whats is your first name: ";
	cin >> firstname;
	
	cout << "Whats is your last name: ";
	cin >> lastname;

    string fullname = concatStrings(firstname, lastname);
 	
	cout << "Hello " << fullname;
	return 0;
}

string concatStrings(string string1, string string2){
	return string1 + " " + string2;
}

