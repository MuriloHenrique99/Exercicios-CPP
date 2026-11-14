#include <iostream>

int main(void){
    int A,B,C,D;
    int* ptrComandante = &A;

    std::cout << "Somarei seu numero a 5 se divisivel por 2 e 3 ou 10 se nao divisivel" << std::endl;
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> ptrComandante;

    std::cout << *ptrComandante;
    
    std::cin.ignore();
    std::cout << "Tecle <Enter> para encerrar.." << std::endl;
    std::cin.get();
}