//Nombre:
//Tp N� :
//Ejercicio N�:
/* Comentario :Hacer un programa donde se carguen 15 n�meros enteros y luego muestre
por pantalla el m�nimo elemento del vector y adem�s indique cu�ntas veces se repite el valor m�nimo dentro del vector

*/

#include<iostream>
using namespace std;
int main()
{
    int vec[15];
    int minimo,num,repe=0;
    bool b=true;

    for(int i=0 ; i<15; i++)
    {
            cout << "Cargue 15 numeros: ";
            cin >> num;
            vec[i]=num;


        if(b==true)
        {

            minimo=vec[i];
            repe++;
            b=false;
        }
        else
        {
            if(vec[i]==minimo)
            {
                repe++;
            }

            else
            {
                if(vec[i]<minimo)
                {
                    minimo=vec[i];
                    repe=1;
                }
            }
        }

    }

    cout<< "El minimo es: "<< minimo << ", se repite " << repe << " cant de veces.";


    return 0;
}
