////Nombre: Matias Zarate
//Tp N° : 6
//Ejercicio N°:2

#include<iostream>
using namespace std;
int main()
{
    int vec[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    //int numero;
    int i , numcomparar;
    bool b=true;

    /*for(i=0;i<15;i++){
        cout<< "ingrese un numero: " << endl ;
        cin>> numero;
            vec[i]  = numero;

     }  */
        cout<<"ingrese un numero para comparar: ";
        cin>> numcomparar;


        for(i=0;i<15;i++){
                if (numcomparar == vec[i]){
                        b=false;
                }
        }
            if(b==false){
                    cout<<endl<< "el numero pertenece a la lista cargada anteriormente." ;
                        }
                        else {cout<<endl<< "el numero No pertenece a la lista cargada." ;}

            return 0;
}
