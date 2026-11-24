#include <iostream>

int calculo(int fatorial){
    int controlador = fatorial;
    
    for(int i = 1; i < controlador; i++){
        fatorial *= i;
    } 
    return fatorial;
}

int main(void){
    
    int num = 0;
    
    while(num <= 0) {
        std::cout << "Digite um numero valido maior que 0: "; std::cin >> num;
    }
    
    int res = calculo(num);
    std::cout << "Resultado: " << res << std::endl;
    
    std::cin.ignore(80, '\n');
    std::cout << "Tecle enter para encerrar.." << std::endl;
    std::cin.get();
    
    return 0;
}