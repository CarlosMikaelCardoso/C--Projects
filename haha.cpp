#include <iostream>
using namespace std;
int main(){

int num;
int num3;
int num1 = 1;
int num2 = 1;
int sol;
cout << "Numero inteiro: ";
cin >> num;

do {
	
 sol = num1 + num2;
 
 cout << sol << ',';
 
 num3 = 1;
 
 sol = num2 + num3;
 
}while (num > sol);


	return 0;
}