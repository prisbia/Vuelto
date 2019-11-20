#include<iostream>
using namespace std;


int main()
{

int bill[10][2]= {{1,0},{2,0},{5,0},{10,0},{20,0},{50,0},{100,0},{200,0},{500,0},{1000,0}};
int monto;
int importe;
int dif;
	
	// monto=1340
	// importe=3000
	// dif=1660
	
cout << "Ingrese el monto de la Factura a pagar --> $ ";
cin  >> monto;
cout << endl << "Ingrese el monto recibido --> $ ";
cin  >> importe;

dif = importe - monto;

cout << endl << endl << "La diferencia a devolver es: $ " << dif;
cout << endl << endl << "Son en billetes : ";
 
		for (int i=9; i>=0; i--)	
        {
        	do 
        	{
        		if (dif>=bill[i][0])
        		{
        		bill[i][1]=bill[i][1] + 1; 
        		dif=dif-bill[i][0];
        		}
        		else
            	{
            		i=i-1;
            	}
        	} while (dif != 0);
        }
        
        for (int i=9; i>=0; i--)
            {
        	if (bill[i][1]>0)
				{
			cout << endl << "Son en devolución " << bill[i][1]<< " billetes de " << bill[i][0];
				}
        	else {int x;}
            }
         
 cout << endl;		
 return(0); 
}
