
#include <iostream>;
using namespace std; //sirve para que no tenga que poner std::

int main(){
char nombre[20];
string nombre_completo;

cout << "Escriba su nombre: ";
getline(cin, nombre_completo);

cout << "\n\nHola, " << nombre_completo << endl;

system("pause");
}