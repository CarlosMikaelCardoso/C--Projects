#include <iostream>

int main(){

char op;
double num1;
double num2;
double result;

std::cout << "==========CALCULATOR==========" << '\n';
	std::cout << "! Digite o num1: ";
	std::cin >> num1;
	
	std::cout << "! Digite um operador(+ - * /): ";
	std::cin >> op;
	
	std::cout << "! Digite o num2: ";
	std::cin >> num2;
	
	switch(op){
		case '+':
		result = num1 + num2;
		std::cout << "! Result " << result << '\n';
		  break;
		case '-':
		result = num1 - num2;
		std::cout << "! Result " << result << '\n';
		  break;
		case '*':
		result = num1 * num2;
		std::cout << "! Result " << result << '\n';
		  break;
		case '/':
		result = num1 / num2;
		std::cout << "! Result " << result << '\n';
			break;
			default:
				std::cout << "Erro";
	}
	std::cout << "========================================";
	return 0;
	
}