#include <iostream>

int fibonacci(int n){
	int a, b, auxiliar;
	a = 0;
	b = 1;
	
	for(int i = 0; i < n; i++){
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		std::cout<<(float)a/auxiliar<<std::endl;
	}
}

