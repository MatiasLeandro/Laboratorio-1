//Nombre:
//Tp N° :
//Ejercicio N°:
/* Comentario :Hacer un programa que le pida al usuario una lista de 10 números enteros
y luego de ingresarlos muestre cuáles de ellos fueron positivos.

*/
#include <iostream>
using namespace std;

int main ()
{
	const int NUM=10;
	int vecnum[10];
	int i,num;

	for(i=0;i<NUM;i++)
	{
		cout<< "Ingrese un digito: " ;
		cin >> num;
		vecnum[i] = num;

	}
		for (int x=0;x<NUM;x++)
		{

			if(vecnum[x]>=0)
		{
			cout <<endl<< "Los positivos son: " << vecnum[x] ;
		}
		}

    return 0;
}
