#include <iostream>
using namespace std;

int ovo;
int cont = 1;
char mao;
char tent;
bool tenta = true;
int main(){
do{
	
cout << "Bem Vindo Ao Jogo Do Ovo!\n";
cout << "Quantos Ovos Voce Ira Pegar?: \n";
cin >> ovo;
 	switch (ovo)
 		
 		
 		case 1:
 			cout << "Com Qual Mao Voce Ira Pegar o Ovo?( D ou E ): \n";
 			cin >> mao;
 			switch (mao){
 				case 'd':
 					cout << "Voce obteve sucesso ao pegar o ovo!:\n";
 				break;
 				
 				case 'e':
 				cout << "Voce nao e destro! Game Over!\n";
 				cout << "Voce Gostaria de continuar?(S ou N): \n";
 				cin >> tent;
					if ('s'){
						if(cont > 1){
							cont = cont - 1;
							cout << "Voltando ao inicio...\n";
						}
				break;	
					} 
			 }
			 if (cont = 0){
			 	cout << "Suas Tentativas acabaram!";
			 }
}while (cont > 1 );
	
	
return 0;
				 
}


	
		

	
	
	
