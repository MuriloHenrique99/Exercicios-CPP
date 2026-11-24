#include <iostream>
#include <array>

int main(void){
    int A[15];
    int B[15];
    int C[30];
    
    int *ptr = A;
    
    for(int i = 0; i < 15; i++){
        std::cout << "Digite um numero pro indice " << i + 1 << " A: " << std::endl;
        std::cin >> *ptr;
        *ptr++;
    }
    ptr = B;
    
    for(int i = 0; i < 15; i++){
        std::cout << "Digite um numero pro indice " << i + 1 << " B: " << std::endl;
        std::cin >> *ptr;
        ptr++;
    }
    ptr = C;
    
    for(int i = 0; i < 30; i++){
        if(i < 15){
            *ptr = A[i];
        } else {
            *ptr = B[i - 15];
        }
        *(ptr)++;
    }
    
    for(int i = 0; i < 30; i++){
        std::cout << "Indice de C: " << C[i] << std::endl;
    }
    
    std::cin.ignore();
    std::cout << "Tecle enter para encerrar" << std::endl;
    std.cin.ignore();
    
    return 0;
}