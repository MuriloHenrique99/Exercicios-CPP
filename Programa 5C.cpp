#include <iostream>

int main(void){
	int sum = 0;
	for(int i = 1; i <= 100; i++){
		sum = sum + i;
	}
	std::cout << "soma dos primeiros 100 numeros: " << sum << std::endl;
	
	std::cin.ignore(80, '\n');
	std::cout << "Tecle <Enter> para encerrar...";
	std::cin.get();
	
	return 0;

}
