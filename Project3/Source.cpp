#include <iostream>
#include <array>
using namespace std;
int main() {
	int valor=0;
	int algoritmo;
	
	int arreglo[100];
	for (int i = 0; i < 100; i++)
	{
		arreglo[i] = i;
	}
	cout << "Que valor desea buscar? " << endl;
	cin >> valor;
	cout << "Que tipo de algoritmo quiere usar? "<<endl;
	cout << "Presiona (1) si quieres el Secuencial " << endl;
	cout << "Presiona (2) si quieres el Binario" << endl;
	cin >> algoritmo;
	int arrlength = sizeof(arreglo) / sizeof(arreglo[0]);
	

	//Busqueda sequential
	if (algoritmo == 1) {
		
		for (int i = 0; i < 100; i++)
		{
			if (arreglo[i] == valor) {
				cout << "Encontrado" << endl;
				cout << "Numero: " << arreglo[i] << " Posicion: " << i<<endl;
				break;
			}

		}
	}
	// Busqueda binaria


	int inicio = 0;
	int finaliza = arrlength - 1;// Sirve para saber que tan grande es el arreglo
	int pivote=0;

	if (algoritmo == 2) {
		
		for (int i =pivote; i < 100; i++)
		{
			pivote = ((inicio + finaliza) / 2);
		
			if (valor == pivote) {
				cout << "Encontrado"<<  endl;
				cout << "Numero: " << pivote << " Posicion: " << valor << endl;
				break;
			}
			else if (valor > pivote) {
				inicio = pivote + 1;
	
			}
			else {
				finaliza = pivote - 1;
				
			}
			}
		}
	
	system("pause");
	}

	
