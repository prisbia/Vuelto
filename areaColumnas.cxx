// Mayor área. Terminar y arreglar cual de las áreas es la mayor.


#include<iostream>
//#include<stdlib>
#include "/usr/include/c++/9.2.0/math.h"
#include "/usr/include/c++/9.2.0/algorithm"

using namespace std;



int main()
{
	
	int col[]={1,8,6,2,5,4,7,8,3,1};
	int lon  = sizeof(col) / sizeof(*col);
	int res[lon];
	int ord[lon];
	cout << lon << endl << endl;
		
	
	
	for (int i=0; i<lon; i++)
	{
		res[i]=i*col[i];
		cout << res[i] << "  ";
	}
	
	cout << endl;
	
	for (int j=0; j<lon; j++)
	{
		int a=0;
		for (int i=0; i<lon; i++)
		{
		
		if (res[i]>=0 && res[i]<res[i+1])
			
			{ord[i]=res[i];}
			else
		    {
			
			a=res[i+1];			//6
			ord[i]=res[i];		//12
			res[i+1]=a;			//6
			}
			
			//cout << res[i] << "  " << ord[i] << "  " << a << "  " << res[i+1] << endl;
					
		}
	//cout << ord[j] << "--------- " << endl; 
	
	}
	
	for (int i=0; i<=lon; i++)
	{cout << ord[i] << "  ";}
	
	
	
	
	return(0);
}
