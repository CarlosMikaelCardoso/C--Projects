#include <iostream>

int main(){
	// ternary operator ?: = replacement to an if/else statement 
	//                       condition ? expression : expression2;
	int grade;
	
	std::cout << "Type your grade: ";
	std::cin >> grade;
	
	grade >= 60 ? std::cout << "You Passed!" : std::cout << "YOU FAIL!"; 	
	
	return 0;
}