#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite um n�mero inteiro entre 1 e 7: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "Domingo\n";
            break;
        case 2:
            cout << "Segunda-feira\n";
            break;
        case 3:
            cout << "Ter�a-feira\n";
            break;
        case 4:
            cout << "Quarta-feira\n";
            break;
        case 5:
            cout << "Quinta-feira\n";
            break;
        case 6:
            cout << "Sexta-feira\n";
            break;
        case 7:
            cout << "S�bado\n";
            break;
        default:
            cout << "N�mero inv�lido\n";
            break;
    }

    return 0;
}

