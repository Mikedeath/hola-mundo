#include <iostream>
using namespace std; //sirve para que no tenga que poner std::
/*int main()
{
	int num1, num2;
	int division = (num1 / num2);
	cout << "Ingrese numero 1";
	cin >> num1;
	cout << "Ingrese numero 2";
	cin >> num2;

	if (division % 2) {
		cout << "Es exacto";

	}
	else {
		cout << "no es exacto";
	}

	system("pause");
}
*/
int main() {
	int base = 5;
	int exponente = 2;
	int ward=1;
	int calculo = 5;

	while (ward < exponente) {
		
		calculo=calculo * 5;
		ward += 1 ;

	}
	cout << "La potencia de el numero " << base << endl<<" "<< calculo<<endl;
	system("pause");

}

