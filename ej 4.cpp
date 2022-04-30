//Nombre:
//Tp N° :
//Ejercicio N°:
/** Comentario :
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta.
El fin de la carga de datos se indica con número de venta igual a 0.

Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima


*/

#include<iostream>
using namespace std;

int main ()
{
    int vdia[32];
    int i,dia,numventa;
	bool b=true;
	float mayorrecaudo;
	float importe,sumaimp=0;
	float vimporte[31] , sumaimpo[31];

	for(i=0;i<32;i++)
	{
		vdia[i+1]=i;
		vimporte[i]=0;
		sumaimpo[i]=0;
	}
    cout << "Numero de venta: ";
    cin >> numventa;

    while(numventa!=0)
    {
		cout << "El dia: ";
		cin >> dia;
		cout << "Importe de venta: ";
		cin >> importe;


        for (i=0; i<=31; i++)
        {
            if(vdia[i+1]==dia)
            {
                vimporte[i] += importe;

            }
        }

        cout << "Numero de venta: ";
        cin >> numventa;

    }
			for(int x=0; x<=31;x++)
			{
					if( vimporte[x] >0 )
					{cout<< "dia " << vdia[x+1] <<"  -  importe " << vimporte[x] << endl;}

					if(b==true)
					{
						dia=vdia[x+1];
						mayorrecaudo=vimporte[x];
						b=false;
					}
						else{if(vimporte[x]>mayorrecaudo)
							{
								dia=vdia[x+1];
								mayorrecaudo=vimporte[x];
							}
							}
			}
					cout << endl<< "el dia que mas se recaudo fue el dia N°: " << dia << " y la recaudacion maxima fue: $ " << mayorrecaudo<< endl;

    return 0;
}
