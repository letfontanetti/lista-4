#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	char ch;
	
	cout << "Digite uma caractere: ";
	cin >> ch;
	
	if (ch >= 'A' && ch <= 'Z') {
        cout << "Letra maiúscula" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Letra minúscula" << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "Número" << endl;
    } else {
        cout << "Caractere inválido" << endl;
    }
	return 0;
}
