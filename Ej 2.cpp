/*
Hacer un programa en el que se ingresen la edad y altura de 5 personas. Luego, calcular e informar:
    La cantidad de personas mayores a 30 a�os que midan m�s de 1.8 metros.
    El promedio de altura de las personas mayores a 30 a�os.
    La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
    La cantidad de personas cuya edad sea de 20, 30 o 40 a�os.
*/
#include<iostream>

using namespace std;




int main()
{
    const int PERSONAS = 5;
    int edad, cantmayor = 0,cantentre = 0, cantdecadas = 0, cantprom = 0;
    float altura,alturapro,promedio;

    for(int i=0; i < PERSONAS ; i++)
    {
        cout << " ingresar edad: " ;
            cin >> edad;
        cout << " ingresar altura: " ;
             cin >> altura;
        cout << endl ;

    if(edad>30 && altura>1.8)
    {
        cantmayor++;
    }

    if( edad>30)
    {
        cantprom++;
        alturapro+=altura;
        promedio = (float)alturapro/cantprom;
    }
    if( altura>= 1.7 && altura<=1.8)
    {
        cantentre++;
    }
    if( edad==20||edad==30||edad==40)
    {
        cantdecadas++;
    }

    }


        cout << "La cantidad de personas mayores a 30 a�os que midan m�s de 1.8 metros son: " << cantmayor << endl;
        cout << "El promedio de altura de las personas mayores a 30 a�os es: " << promedio << endl;
        cout << "La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive) son: " << cantentre << endl;
        cout << "La cantidad de personas cuya edad sea de 20, 30 o 40 a�os son: " << cantdecadas << endl;

    return 0;
}
