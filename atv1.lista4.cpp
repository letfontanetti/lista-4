#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite um número inteiro entre 1 e 7: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "Domingo\n";
            break;
        case 2:
            cout << "Segunda-feira\n";
            break;
        case 3:
            cout << "Terça-feira\n";
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
            cout << "Sábado\n";
            break;
        default:
            cout << "Número inválido\n";
            break;
    }

    return 0;
}

