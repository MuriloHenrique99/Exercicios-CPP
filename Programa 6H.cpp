#include <iostream>
#include <vector>

int main(void){
    std::vector<double> A(20), B(20);
    
    for(int i = 0; i < A.size(); i++){
        std::cout << "Digite um valor para indice " << i + 1 << ": " << std::endl;
        std::cin >> A[i];
    }
    for(int i = A.size() - 1; i >= 0; i--){
        B[i] = A[i];
    }
    
    for(int i = 0; i < A.size(); i++){
        std::cout << A[i] << std::endl;
        std::cout << B[i] << std::endl;
    }
    std::cin.ignore();
    std::cout << "Tecle Enter para encerrar.." << std::endl;
    std::cin.get();
    
    return 0;
}

