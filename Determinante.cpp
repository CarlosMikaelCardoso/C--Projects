#include <iostream>

int main(){

int A1; 
int A2;
int A3; 
int B1; 
int B2;
int B3;
int C1;
int C2;
int C3;
int menorNum;
int result;
int linhas = 1;


std::cout << "XXXXXXXXXXX CALCULADORA DE DETERMINANTE XXXXXXXXXXX\n";

std::cout << "Quantas Linhas (2 - 3): ";
std::cin >> linhas;

if (linhas = 2){

std::cout << "Digite o Valor de A1: ";
std::cin >> A1;

std::cout << "Digite o Valor de A2: ";
std::cin >> A2;

std::cout << "Digite o Valor de B1: ";
std::cin >> B1;

std::cout << "Digite o Valor de B2: ";
std::cin >> B2;

result = A1 * B2 - A2 * B1;
menorNum = result;

if (A1 < menorNum){
	menorNum = A1;
	
}
if (A2 < menorNum){
	menorNum = A2;
	
}

if (B1 < menorNum){
	menorNum = B1;
	
}
if (B2 < menorNum){
	menorNum = B2;
	
}

std::cout << "The result is " << result << '\n';
std::cout << "E o Menor Numero foi: " << menorNum << '\n';
}

if (linhas = 3){

std::cout << "Digite o Valor de A1: ";
std::cin >> A1;

std::cout << "Digite o Valor de A2: ";
std::cin >> A2;

std::cout << "Digite o Valor de B1: ";
std::cin >> B1;

std::cout << "Digite o Valor de B2: ";
std::cin >> B2;

std::cout << "Digite o Valor de B3: ";
std::cin >> B3;

std::cout << "Digite o Valor de C1: ";
std::cin >> C1;

std::cout << "Digite o Valor de C2: ";
std::cin >> C2;

std::cout << "Digite o Valor de C3: ";
std::cin >> C3;

result = A1 * B2 * C3 + A2 * B3 * C1 + A3 * B1 * C2 - A3 * B2 * C1 + A1 * B3 * C2 + A2 * B1 * C3;
menorNum = result;

if (A1 < menorNum){
	menorNum = A1;
	
}
if (A2 < menorNum){
	menorNum = A2;
	
}
if (A3 < menorNum){
    menorNum = A3;	
}

if (B1 < menorNum){
	menorNum = B1;
	
}
if (B2 < menorNum){
	menorNum = B2;
}
if (B3 < menorNum){
	menorNum = B3;
	
}
if (C1 < menorNum){
	menorNum = C1;
}
if (C2 < menorNum){
	menorNum = C2;
}
if (C3 < menorNum){
	menorNum = C3;
}

std::cout << "The result is " << result << '\n';
std::cout << "E o Menor Numero foi: " << menorNum << '\n';

std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
return 0;
}
}

