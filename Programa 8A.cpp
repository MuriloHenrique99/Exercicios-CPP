//Programa 8A.CPP

#include <iostream>
#include <array>


int main(void){

    std::array<std::array <int, 3>, 5> normalA;
    std::array<std::array <int, 3>, 5> normalB;
    
    
    std::array<std::array <int*, 3>, 5> A;
    std::array<std::array <int*, 3>, 5> B;
    std::array<std::array<int*, 3>, 5> C;


    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[i].size(); j++){
            std::cout << "Digite um valor:"; std::cin >> normalA[i][j];
            A[i][j] = &normalA[i][j];
        }
    }

    for(int i = 0; i < B.size(); i++){
        for(int j = 0; j < B[i].size(); j++){
            std::cout << "Digite dois valores um ao lado do outro"; std::cin >> normalB[i][j];
            B[i][j] = &normalB[i][j];
        }
    }

    for(int i = 0; i < C.size(); i++){
        for(int j = 0; j < C[i].size(); j++){
            C[i][j] = new int;
            *C[i][j] = *A[i][j] + *B[i][j];
        }
    }

    for(int i = 0; i < C.size(); i++){
        for(int j = 0; j < C[i].size(); j++){
            std::cout << "Resultado: " << *C[i][j] << std::endl;
        }
    }

    for(int i = 0; i < C.size(); i++){
        for(int j = 0; j < C[i].size(); j++){
            delete C[i][j];
        }
    }

    std::cin.ignore(80, '\n');
	std::cout << "Tecle <Enter> para encerrar... ";
	std::cin.get();
	
	return 0;
}
