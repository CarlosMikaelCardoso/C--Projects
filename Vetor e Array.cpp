#include <iostream>
using namespace std;

int main(){
	int tam = 5;
	int vetor[tam]= {10,20,30,40,50};
	int i;
//	cout << "Digite um valor: " << '\n';
//	cin >> n;
//	vetor[0]=10;
//	vetor[1]=20;
//	vetor[2]=30;
//	vetor[3]=40;
//	vetor[4]=50;
// sizeof retorna o tamanho em bytes
	for (i = 0;i < sizeof(vetor)/4; i++){
		
		cout << vetor[i] << '\n';
		}
return 0;		
	}


//	cout << vetor[n] << '\n';
