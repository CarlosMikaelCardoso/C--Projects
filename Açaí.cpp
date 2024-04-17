#include <iostream>

int main(){
	double popular;
	double medio;
	int Valor_Popular;
	int Valor_Medio;
	double Total;
	
	std::cout << "Digite a quantos litros do popular tem: ";
	std::cin >>  popular;
	
	std::cout << "Digite a quantos litros do medio tem: ";
	std::cin >> medio;
	
	std::cout << "Qual o valor do popular ?: ";
	std::cin >> Valor_Popular;
	
	std::cout << "Qual o valor do medio ?: ";
	std::cin >> Valor_Medio;
	
	Total = (popular * Valor_Popular) + (medio * Valor_Medio) ;
	
	std::cout << "O valor total do Acai de hoje foi " << Total << " $";
	
	return 0;
}