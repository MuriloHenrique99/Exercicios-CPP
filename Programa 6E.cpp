#include <iostream>
#include <vector>

int main(void){
	std::vector<int> A(15);
	std::vector<long long> B(15);//fica bizarramente mais pesado eu imagino
	int cont;
	long long fat;
	int comparador;
	
	for(int i = 0; i < 15; i++){
		std::cout << "Digite o valor para o indice " << i + 1 << ": "; std::cin >> A[i];
	}
	
	for(int i = 0; i < 15; i++){
		fat = 1;
		cont = 1;
		comparador = A[i];
		do { 
			fat = fat * cont;
			cont += 1;
		} while (cont <= comparador);
		
		B[i] = fat;
		
	}
	
	for(int i = 0; i < 15; i++){
		std::cout << "Resultado: " << B[i] << std::endl;
	}
	
	std::cin.ignore(80, '\n');
	std::cout << "Tecle <Enter> para encerrar... ";
	std::cin.get();
	
	return 0;
}
			
