#include <iostream>
#include <cmath>

int main(void) {

    int res;

    for(int i = 15; i <= 200; i++) {
        res = std::round(pow(i, 2));
        std::cout << "resultado: " << res << std::endl; 
    }

    std::cin.ignore(80, '\n');
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();

    return 0;
}