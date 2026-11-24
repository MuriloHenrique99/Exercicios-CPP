#include <iostream>

int main(void){
    
    double n1,n2,n3,med;
    double med_aluno;
    
    std::cout << "Digite a nota 1: "; std::cin >> n1;
    std::cout << "Digite a nota 2: "; std::cin >> n2;
    std::cout << "Digite a nota 3: "; std::cin >> n3;
    
    std::cout << "Digite a media da sala: "; std::cin >> med;
    med_aluno = (n1 + n2 + n3) / 3;
    
    if(med_aluno > med){
        std::cout << "Aluno acima da media" << std::endl;
    } else if(med_aluno == med){
        std::cout << "Aluno esta na media" << std::endl;
    } else {
        std::cout << "Aluno abaixo da media" << std::endl;
    }
    
}