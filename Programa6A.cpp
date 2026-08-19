#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
	std::vector<std::string> A(10);
	int tam = 10;
	
	
	for(int i = 0; i < tam; i++){
		std::cout << "digite um nome pro indice " << i << ": "; 
		std::cin >> A[i];
	}
	
	for(int i = 0; i < tam; i++){
		std::cout << "o nome que vc digitou foi: " << A[i] << std::endl;
	}
	
	std::cin.ignore(80, '\n');
	std::cout << "Tecle <Enter> para encerrar... " << std::endl;
	std::cin.get();
	
	return 0;
	
}
