#include <iostream>
#include <vector>
int main(){
	int value; 
	int valuee;
	int calculate;
	
	std::cout << "enter the value: ";
	std::cin >> value;
    
	std::cout << "enter the second value: ";
	std::cin >> valuee;
	
	calculate = value * valuee;
	
    std::cout << "The final Value is " << calculate << ".";
	
	return 0;
}