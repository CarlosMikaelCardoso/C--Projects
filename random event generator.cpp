#include <iostream>
#include <ctime>

int main(){

srand(time(0));

int randNum = rand() % 5 + 1;

switch(randNum){
	case 1: std::cout << "You win a dildo!\n";
	break;
    case 2: std::cout << "You may have give your pussy to me\n";
    break;
	case 3: std::cout << "Oral Fuck\n";
	break;
    case 4: std::cout << "You win a Hug\n";
    break;
	case 5: std::cout << "Kiss on cheeks\n";
	break;
	case 6: std::cout << "Pussy lick\n";
	break;
}

	return 0;
}