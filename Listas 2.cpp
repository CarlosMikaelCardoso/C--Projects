#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list <int> aula,teste;
	int tam;
	list <int>:: iterator it;
	
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
		aula.merge(teste);
	tam = 10;
	
	for(int i = 0; i < tam; i++){
		aula.push_front(i);	
		
	}

	it = aula.begin();
	advance(it,3);
	aula.insert(it,0);
	
	aula.erase(--it);
	
//	aula.clear();Limpa todos os elementos da lista
//	aula.empty();
	

	cout << "Tamanho da lista: " << aula.size() << '\n';
	
	for(int i = 0; i < tam; i++){
		cout << aula.front() << '\n';	
		aula.pop_front();
	}
	
return 0;	
}
