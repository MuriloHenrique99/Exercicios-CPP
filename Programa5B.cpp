#include <iostream>

int main(void){
    int n, res;
    std::cout << "Digite um valor: "; std::cin >> n;
    for(int i=1; i <= 10; i++){
        res = n * i;
        std::cout << n << " x " << i << " = " << res << std::endl;
    }

    std::cin.ignore(80, '\n');
    std::cout << "Tecle <Enter> para encerrar...";
    std::cin.get();

    return 0;
}
