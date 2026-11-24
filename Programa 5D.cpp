#include <iostream>

int main(void){
    int sum = 0;
    int* ptr = &sum;
    
    int iterador = 1;
    
    while(iterador <= 500){
        *(ptr) += iterador;
        iterador++;
    }
    std::cout << sum << std::endl;
    
    std::cin.ignore();
    std::cout << "Tecle enter para encerrar..";
    std::cin.get();
    
    return 0;
    
}