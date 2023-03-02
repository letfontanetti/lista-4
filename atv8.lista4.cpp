#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int opcao, celsius, fahrenheit, kelvin;
	
	cout << "Digite a temperatura em graus Celsius: ";
	cin >> celsius;
	
	cout << "Escolha uma opcao de conversao:" << endl;
    cout << "1 - Celsius para Fahrenheit" << endl;
    cout << "2 - Celsius para Kelvin" << endl;
    cout << "R: ";
    cin >> opcao;
    
    if(opcao == 1){
    	fahrenheit=(celsius * 1.8) + 32.0;
    	cout << "A temperatura em graus Fahrenheit e: " << fahrenheit << endl;
	}else if(opcao == 2){
		kelvin = celsius + 273.15;
            cout << "A temperatura em graus Kelvin e: " << kelvin << endl;
	}
}
