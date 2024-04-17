#include <iostream>

namespace first{
	int x = 1;
}

namespace second{
	int x = 10;
}

int main (){
using namespace second;

std::cout << x;

return 0;
	
}