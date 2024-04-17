#include <iostream>
using namespace std;

double square(double lenght);
double cube (double lenght);
	
int main(){
	// return = return a vlaue back to the spot 
	//          where you called the encompassing function
	
	double lenght = 6.0;
	double area = square (lenght);
	double volume = cube(lenght);
	
	cout << "Area: " << area << "cm ^2\n";
	cout << "Volume: " << volume << "cm ^3\n";

return 0;
}

double square(double lenght){
	return lenght * lenght;
}
double cube(double lenght){
	return lenght * lenght * lenght;
}
