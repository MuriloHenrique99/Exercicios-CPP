#include <iostream>
#include <vector>
#include <string>

int main(void){
	
	std::vector<int> A(8), B(8);
	
	for(int i = 0; i < 8; i++){
		std::cout << "Digite o valor do indice " << i + 1 << ": "; std::cin >> A[i];
	}
	
	for(int i = 0; i < 8; i++){
		B[i] = A[i] * 3;
	}
	
	for(int i = 0; i < 8; i++){
		std::cout << "o indice ficou: " << B[i] << std::endl;
	}
	
	std::cin.ignore(80, '\n');
	std::cout << "Tecle <Enter> para encerrar... ";
	std::cin.get();
	
	return 0;
	
}
