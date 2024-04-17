#include <iostream>

int main(){

   // cout << ( insertion operator )
   // cin >> ( extraction operator )
   std::string name;
   int age;
   
   //std::cout << "Whats your name?: ";
   //std::cin >> name;
   // Se prescisar perguntar o nome inteiro usa-se
   
   std::cout << "Whats your full name?: ";
   std::getline(std::cin, name);
   
   // GetLine ler a linha mesmo que tenha espaço, sem ele não iria ler nada após algum espaço!
   // Caso o comando cin seja usado antes do getline, usa-se "std::getline(std::cin >> std::ws, name)"
   // para não ocorrer um erro que pergunta a idade e logo após o progama finaliza, e mostra as informaçoes misturadas
   
   std::cout << "Whats your age?: ";
   std::cin >> age;
   
   std::cout << "Hello " << name << '\n';
   std::cout << "You Have " << age << " Years Old";
	
	
	return 0;
}