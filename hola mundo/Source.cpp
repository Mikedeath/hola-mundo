

#include <iostream>
#include <string>
using namespace std; //sirve para que no tenga que poner std::


void calculo_billetes(int residuo) 
{
	int cociente = 0;

	// Billetes 500
	cociente = residuo / 500;
	if (cociente > 0)
		cout << cociente << "billetes de 500" << endl;
	residuo = residuo % 500;

	// Billetes 100
	cociente = residuo / 100;
	if (cociente > 0)
		cout << cociente << "billetes de 100" << endl;
	residuo = residuo % 100;

	// Billetes 50
	cociente = residuo / 50;
	if (cociente > 0)
		cout << cociente << "billetes de 50" << endl;
	residuo = residuo % 50;

	// Billetes 20
	cociente = residuo / 20;
	if (cociente > 0)
		cout << cociente << "billetes de 20" << endl;
	residuo = residuo % 20;

	// Billetes 10
	cociente = residuo / 10;
	if (cociente > 0)
		cout << cociente << "billetes de 10" << endl;
	residuo = residuo % 10;

	// Billetes 5
	cociente = residuo / 5;
	if (cociente > 0)
		cout << cociente << "billetes de 5" << endl;
	residuo = residuo % 5;

	// Billetes 1
	cociente = residuo / 1;
	if (cociente > 0)
		cout << cociente << "billetes de 1" << endl;
	residuo = residuo % 1;

	cout << endl;



}

// cout << (calificacion >= 60? "aprobado" : "reprobado); ----------Operador ternario---------


int main()
{
	cout << " Billetes" << endl;
	cout << " Ingrese la cantidad de Dinero";
	int cantidad = 0;
	cin >> cantidad;

	calculo_billetes(cantidad);

	














	// Programa 
	/*
	int x = 0;
	int num1 = 0;
	int b500 = 0, b100 = 0, b50 = 0, b20 = 0, b10 = 0, b5 = 0, b1 = 0;

	cout << "Escriba un numero \n";
	cin >> num1;
	int num2 = num1;
	int num3 = num1;
	int num4 = num1;
	int num5 = num1;
	int num6 = num1;
	int num7 = num1;
	int num8 = num1;

	for (size_t i = 0; i < num2; i++)
	{
		num2 -= 500;


	
		if (num2 > 0) {

			b500 += 1;

		}
		
		
	
}
	for (size_t i = 0; i < num3; i++)
	{


		num3 - 100;
		if (num3 > 0) {

			b100 += 1;

		}
		else {
			break;

		}
	}
	for (size_t i = 0; i < num4; i++)
	{

	
	num4 - 50;
	if (num4 >= 0) {

		b50 += 1;

	}
	else {
		break;
	}

}
	for (size_t i = 0; i < num5; i++)
	{


		num5 - 20;
		if (num5 >= 0) {

			b20 += 1;

		}
		else {
			break;

		}
	}
	for (size_t i = 0; i < num6; i++)
	{


		
			num6 - 10;
			if (num6 >= 0) {

				b10 += 1;

			}
			else {
				break;
			}
			
		
	}
	for (size_t i = 0; i < num7; i++)
	{

		
			num7 - 5;
			if (num7 >= 0) {

				b5 += 1;

			}
			else {
				break;
			}
			
		
	}
	for (size_t i = 0; i < num8; i++)
	{

		{
			num8 - 1;
			if (num8 >= 0) {

				b1 += 1;

			}
			else {
				break;
			}
			
			
		}
	}
	*/

//Programa
	/*
	if (num1 - 100 >= 0) {
		b100 += 1;

	}
	if (num1 - 50 >= 0) {
		b500 += 1;

	}
	if (num1 - 20 >= 0) {
		b500 += 1;

	}
	if (num1 - 10 >= 0) {
		b500 += 1;

	}
	if (num1 - 5 >= 0) {
		b500 += 1;

	}
	if (num1 - 1 >= 0) {
		b500 += 1;

	}
	*/
/*
	if (b500 > 0)
		cout << "Billetes de 500: " << b500 << std::endl;
	if (b100 > 0)
		cout << "Billetes de 100: " << b100 << std::endl;
	if (b50 > 0)
		cout << "Billetes de 50: " << b50 << std::endl;
	if (b20 > 0)
		cout << "Billetes de 20: " << b20 << std::endl;
	if (b10 > 0)
		cout << "Billetes de 10: " << b10 << std::endl;
	if (b5 > 0)
		cout << "Billetes de 5: " << b5 << std::endl;
	if (b1 > 0)
		cout << "Billetes de 1: " << b1 << std::endl;
	*/
	system("pause");



/*
char nombre[20];
string nombre_completo;

cout << "Escriba su nombre: ";
getline(cin, nombre_completo);

cout << "\n\nHola, " << nombre_completo << endl;

system("pause");
*/

/*
int num1, num2, num3, num4;
std::cout << "Ejercicio suma de enteros\n";
std::cout << "Escriba numero 1\n";
std::cin >> num1;
std::cout << "Escriba numero 2\n";
std::cin >> num2;
std::cout << "Escriba numero 3\n";
std::cin >> num3;
std::cout << "Escriba numero 4\n";
std::cin >> num4;

int suma = (num1 + num2 + num3 + num4);
float promedio =float (suma) / 4;

std::cout << "El promedio de las notas es: " << promedio << std::endl;
//my ssdasdasdassdamyopencourseware



system("pause");
*/



}