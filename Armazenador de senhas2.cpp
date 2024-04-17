#include <iostream>

using namespace std;

int main(){
bool prog = false;
bool liberado = true;
bool liberado2 = true;

int open;
int senha[2];
char iniciar;
senha[1] = 1;
senha[2] = 2;
cout << "Iniciar Progama?: ";
cout << "Y ou N \n";
cin >> iniciar;
if (iniciar = 'Y'){

cout << "Bem-vindo ao armazenador de senhas!\n";
cout << "Qual espaço voce quer acessar ?: \n";
cout << "1 ou 2" << '\n';
cin >> open;

switch(open){
case 1:
    if (liberado == true){
        cout << "Digite sua senha com apenas com numeros: \n";
        cin >> senha[1];
        liberado = false;
    }
else{
    cout << "Espaço ja oucupado senha= " << senha[1] << '\n';
}
break;
case 2:
    if (liberado2 == true){
        cout << "Digite sua senha com apenas com numeros: \n";
        cin >> senha[2];
        liberado2 = false;
}
else {
    cout << "Espaço ja oucupado senha= " << senha[2] << '\n';
}
}
if (prog == true){
    goto 5
}
}
else {
        return 0;
}
return 0;
}


