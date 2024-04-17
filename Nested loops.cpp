#include <iostream>

int main(){
	
int rows;
int colluns;
char symbols;


std::cout << "How many rows: ";
std::cin >> rows;

std::cout << "How many colluns: ";
std::cin >> colluns;

std::cout << "Enter the symbol use: ";
std::cin >> symbols;
	
	for(int i = 1; i <= rows; i++){
	
for (int j = 1; j <= colluns; j++){
	std::cout << symbols;
}
std::cout << '\n';
}


	return 0;
}