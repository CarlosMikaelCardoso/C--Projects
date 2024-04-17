#include <iostream>

int main()
{
std::string name;

std::cout << " Enter your name: ";
std::getline(std::cin, name);

//name.append("@gmail.com");

//name.insert(0, "@");

name.erase(0, 3);

std::cout << name;
//std::cout  << name;







//name.clear();
//	std::cout << "Hello " << name;

//if (name.lenght() > 12 ){
	//std::cout << "Your Name is over 12 characters ";
//}
//else {
	//std::cout << "Welcome " << name;
	
//}


	//if(name.empty()){
	//	std::cout << "You didn't enter your name" ;
		
//	}
//	else{
//		std::cout << "Hello " << name;
//	}
	return 0;
}