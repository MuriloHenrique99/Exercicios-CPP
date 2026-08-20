#include <iostream>
#include <vector>
#include <string>

int main(void){
	std::vector<int> A(20), B(20), C(20);
	
	for(int i = 0; i < 20; i++){
		std::cout << "Digite um elemento para a matriz <A> indice " << i + 1 << ": "; std::cin >> A[i];
	}
	
	for(int i = 0; i < 20; i++){
		std::cout << "Digite um elemento para a matriz <B> indice " << i + 1 << ": "; std::cin >> B[i];
	}
	
	for(int i = 0; i < 20; i++){
		C[i] = A[i] - B[i];
		std::cout << "Resultado: " << C[i] << std::endl;
	}
	
	std::cin.ignore(80, '\n');
	std::cout << "Tecle <Enter> para encerrar... ";
	std::cin.get();
	
	return 0;

}
