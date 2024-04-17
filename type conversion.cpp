#include <iostream>

int main(){

   //type conversion = conversion a value of one type to another
   //                  Implicit = automatic
   //                  Explicit = Precede value with new data type (int)
    int correct = 9;
    int questions = 10;
    int score = correct/(double)questions * 100;
    
    std::cout << score << "%";
	
	
	return 0;
}