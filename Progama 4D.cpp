#include <iostream>

using namespace std;

int main(void){
	double n1,n2,n3,n4,md1,md2,ne;
	cout << "Digite a nota bimestral: "; cin >> n1;
	cout << "Digite a nota bimestral: "; cin >> n2;
	cout << "Digite a nota bimestral: "; cin >> n3;
	cout << "Digite a nota bimestral: "; cin >> n4;
	md1 = (n1 + n2 + n3 + n4) / 4;
	if(md1 >= 7) {
		cout << "Aprovado " << md1 << endl;
	} else {
		cout << "Digite a nota de exame: "; cin >> ne;
		md2 = (md1 + ne) / 2;
		if(md2 >= 5) {
			cout << "Aprovado em exame " << md2 << endl;
		} else {
			cout << "Reprovado " << md2 << endl;
		}
		
	std::cout << "Tecle <Enter> para encerrar...";
	std::cin.get();
	
	}
	return 0;
}
