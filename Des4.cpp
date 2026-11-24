#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>
#include <cctype>

int main(void){
    
    std::string resp = "sim";
    
    while(resp == "sim"){
        double B;
        int E;
        
        std::cout << "Digite um valor real: "; std::cin >> B;
        std::cout << "Digite um valor inteiro: "; std::cin >> E;
        
        std::cout << pow(B, E);
        
        std::cout << "Se deseja fazer outro digite sim: "; std::cin >> resp;
        
        
        //função lambda por que fununfa basicamente
        std::transform(resp.begin(),resp.end(), resp.begin(),[](char c)
        {
            return std::tolower(c);
        });
    }
    
    std::cin.ignore(80, '\n');
    std::cout << "Tecle enter para encerrar.." << std::endl;
    std::cin.get();
    
    return 0;
}