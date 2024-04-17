#include <iostream>

int main(){
	char op;
	double num1;
	double num2;
	double result;
	
	std::cout << "---------CALUCULATOR---------\n";
	
	std::cout << "Enter num1: ";
	std::cin >> num1;
	
	std::cout << "Enter Either (+ - * /) ";
	std::cin >> op;
	
	std::cout << "Enter num2 :";
	std::cin >> num2;
	
	switch(op){
		case '+':
			result = num1 + num2;
			std::cout << "Result " << result << '\n';
		break;
		case '-':
			result = num1 - num2;
			std::cout << "Result " << result << '\n';
		break;
		case '*':
			result = num1 * num2;
			std::cout << "Result " << result << '\n';
		break;
		case '/':
			result = num1 / num2;
			std::cout << "Result " << result << '\n';
		break;
		default:
			std::cout << "Please enter op only (+ - * /) ";
		
	}
	
	std::cout << "-------------------------------";
	
	
	return 0;
}