/*
Hacer un programa en el que se ingresen la edad y altura de 5 personas. Luego, calcular e informar:
    La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
    El promedio de altura de las personas mayores a 30 años.
    La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
    La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/
#include<iostream>

using namespace std;




int main()
{
    const int PERSONAS = 5;
    int edad[5], cantmayor = 0,cantentre = 0, cantdecadas = 0, cantprom = 0;
    float altura[5],alturapro,promedio;

    for(int i=0; i < PERSONAS ; i++)
    {
        cout << " ingresar edad: " ;
            cin >> edad[i];
        cout << " ingresar altura: " ;
             cin >> altura[i];
        cout << endl ;

    if(edad[i]>30 && altura[i]>1.8)
    {
        cantmayor++;
    }

    if( edad[i]>30)
    {
        cantprom++;
        alturapro+=altura[i];
        promedio = (float)alturapro/cantprom;
    }
    if( altura[i]>= 1.7 && altura[i]<=1.8)
    {
        cantentre++;
    }
    if( edad[i]==20||edad[i]==30||edad[i]==40)
    {
        cantdecadas++;
    }

    }


        cout << "La cantidad de personas mayores a 30 años que midan más de 1.8 metros son: " << cantmayor << endl;
        cout << "El promedio de altura de las personas mayores a 30 años es: " << promedio << endl;
        cout << "La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive) son: " << cantentre << endl;
        cout << "La cantidad de personas cuya edad sea de 20, 30 o 40 años son: " << cantdecadas << endl;

    return 0;
}
