#include <iostream>
#include <cmath>

int main(void) {
	double a,b,c,del,x1,x2;
	std::cin >> a >> b >> c;
	if (a != 0 && b != 0 && c != 0) {
		del = pow(b, 2) - 4 * a * c;
		if (del < 0) {
			std::cout << "Nao ha solucao real " << del << std::endl;
		} else if(del == 0) {
			x1 = -b / (2 * a);
			std::cout << "Ha uma solucao real " << x1 << std::endl;
		} else {
			x1 = (-b + sqrt(del)) / (2 * a);
			x2 = (-b - sqrt(del)) / (2 * a);
			std::cout << "ha mais de uma solucao real" << " " << x1 << " " << x2 << std::endl;
		}
	} else {
		std::cout << "Nao coloque zeros" << std::endl;
	}

	std::cout << "Tecle <Enter> para encerrar...";
	std::cin.get();
	
	return 0;
}
