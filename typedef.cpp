#include <iostream>
#include <vector>

//typedef std::string text_t;
//typedef int num_t;
using text_t = std::string;
using num_t = int;

int main(){
	
	text_t firstName = "Mikael";
	num_t age = 17;

	std::cout << firstName << '\n';
    std::cout << age << '\n';
		
	return 0;
}