#include <iostream> 

int main(void) {
    int A, B, C, X;
    std::cout << "digite um valor: "; std::cin >> A;
    std::cin.ignore(80, '\n');

    std::cout << "digite um valor: "; std::cin >> B;
    std::cin.ignore(80, '\n');
    
    std::cout << "digite um valor: "; std::cin >> C;
    std::cin.ignore(80, '\n');

    if(A > B) {
        X = B;
        B = A;
        A = X;
    } 
    
    if(A > C) {
        X = C;
        C = A;
        A = X;
    }
    if(B > C) {
        X = C;
        C = B;
        B = X;
    }

    std::cout << "A ordem dos numeros seria: " << A << " " << B << " " << C << std::endl;

    std::cin.ignore(80, '\n');
	std::cout << "Tecle <Enter> para encerrar...";
	std::cin.get();

    return 0;
}