#include <iostream>

int main(void){
    int A,B,C,D;
    int* ptrComandante = &A;

    std::cout << "Somarei seu numero a 5 se divisivel por 2 e 3 ou 10 se nao divisivel" << std::endl;
    std::cout << "Digite um numero: ";
    std::cin >> *ptrComandante;

    if(A % 2 == 0 && A % 3 == 0){
        *ptrComandante += 5;
        std::cout << "Numero divisivel = " << A << std::endl;
    } else {
        *ptrComandante += 10;
        std::cout << "Numero nao divisivel = " << A << std::endl;
    }
    
    ptrComandante = &B;
    std::cout << "Digite um numero: ";
    std::cin >> *ptrComandante;
    
    if(B % 2 == 0 && B % 3 == 0){
        *ptrComandante += 5;
        std::cout << "Numero divisivel = " << B << std::endl;
    } else {
        *ptrComandante += 10;
        std::cout << "Numero nao divisivel = " << B << std::endl;
    }
    
    ptrComandante = &C;
    std::cout << "Digite um numero: ";
    std::cin >> *ptrComandante;
    
    if(C % 2 == 0 && C % 3 == 0){
        *ptrComandante += 5;
        std::cout << "Numero divisivel = " << C << std::endl;
    } else {
        *ptrComandante += 10;
        std::cout << "Numero nao divisivel = " << C << std::endl;
    }
    
    ptrComandante = &D;
    std::cout << "Digite um numero: ";
    std::cin >> *ptrComandante;
    
    if(D % 2 == 0 && D % 3 == 0){
        *ptrComandante += 5;
        std::cout << "Numero divisivel = " << D << std::endl;
    } else {
        *ptrComandante += 10;
        std::cout << "Numero nao divisivel = " << D << std::endl;
    }
    
    ptrComandante = nullptr;
    
    std::cin.ignore();
    std::cout << "Tecle <Enter> para encerrar.." << std::endl;
    std::cin.get();
}