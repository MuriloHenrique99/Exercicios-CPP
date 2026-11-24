#include <iostream>
#include <cstdint>
#include <string>
//desafio 5, coloquei nomes pq sim

int main(void){
    std::string nome;
    double renda;
    uint32_t idade;
    
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);
    std::cout << "Informe sua renda R$"; std::cin >> renda;
    std::cout << "Informe sua idade: "; std::cin >> idade;
    
    if(renda < 1200 && idade > 21){
        std::cout << "Voce esta permitido a participar do programa" << std::endl;
    } else {
        std::cout << "Voce nao possui permissao para participar do programa" << std::endl;
    }
    
    std::cin.ignore(80, '\n');
    std::cout << "Tecle Enter para encerrar" << std::endl;
    std::cin.get();
    
    return 0;
}
