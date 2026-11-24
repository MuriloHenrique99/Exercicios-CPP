#include <iostream>
#include <cmath>

double f(double x){
    return pow(x, 2) - x * 3 + 5;
}

int main(void){
    
    double a;
    
    std::cout << "Digite um valor: "; std::cin >> a;
    
    std::cout << "Resultado: " << f(a) << std::endl;
    
    std::cin.ignore(80, '\n');
    std::cout << "Tecle Enter para encerrar.." << std::endl;
    std::cin.get();
    
    return 0;
    
}