#include <iostream>
#define size 400000
using namespace std;

void llenar(int x[size])
{
	int y=1;
	for(int i=0; i<size; i++)
	{
		if(y>100)
		{
			y=y-100;
		}		
		x[i]=y;
		y++;
	}
}
	


void buscar(int x[size], int y)
{
	for(int i=0; i<size; i++)
	{
		if(x[i]==y)
		{
			cout<<i<<"\n";
		}
	}
}




int main()
{
	int matrix[size];
	llenar(matrix);
	int x;
	cout<<"Ingrese un numero: ";
	cin>>x;
	buscar(matrix,x);
	return 1;
}
