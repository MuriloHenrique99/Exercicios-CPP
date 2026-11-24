#include <iostream>
#include <vector>

int main(void){
    
    std::vector<int> A(20), B(20);
    int *ptr = A.data();
    
    for(int i = 0; i < A.size(); i++){
        std::cout << "Digite um valor pro indice " << i + 1 << ": " << std::endl;
        std::cin >> *ptr;
        ptr++;
    }
    
    for(int i = 0; i < A.size(); i++){
        int sum = 0;
        int iterador = 1;;
        for(int j = 0; j < A[i]; j++){
            sum += iterador;
            iterador++;
        }
        B[i] = sum;
    }
    
    for(int i = 0; i < B.size(); i++){
        std::cout << "Valor final: " << B[i] << std::endl;
    }
    
    std::cin.ignore();
    std::cout << "Tecle Enter para encerrar.." << std::endl;
    std::cin.get();
    
    return 0;
}

