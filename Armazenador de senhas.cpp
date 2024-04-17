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
do{
        pontoinicial:
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
        system("clear||cls");
    cout << "Espaco ja oucupado senha= " << senha[1] << '\n' << '\n';
    goto pontoinicial;
}
break;
case 2:
    if (liberado2 == true){
        cout << "Digite sua senha com apenas com numeros: \n";
        cin >> senha[2];
        liberado2 = false;
}
else {
        system("clear||cls");
    cout << "Espaco ja oucupado senha= " << senha[2] << '\n' << '\n';
    goto pontoinicial;
}
}
system("clear||cls");
}while (prog = true);
}
else {
        return 0;
}
return 0;
}


