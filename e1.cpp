#include <iostream>
#define size 2
#define siz 2
#define si 3
using namespace std;

void printMatrix(int m[size][si])
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<si; j++)
		{
			cout<<m[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

int parcial(int a[size][siz], int b[siz][si], int i, int j, int num)
{
	int x=0;
	for(int k=0; k<num; k++)
	{
		x=x+ a[i][k] * b[k][j];
	}
	return x;
}

void productMatrix(int a[size][siz], int b[siz][si])
{
	cout<<"Matriz A	"<<"\n";
	for(int k=0; k<size; k++)
	{
		for(int l=0; l<siz; l++)
		{
			int val;
			cout<<"Ingrese valor para ("<<k<<", "<<l<<"): ";
			cin>>val;
			a[k][l]=val;
		}
	}
	cout<<"\n";
	cout<<"Matriz B	"<<"\n";
	for(int k=0; k<siz; k++)
	{
		for(int l=0; l<si; l++)
		{
			int val;
			cout<<"Ingrese valor para ("<<k<<", "<<l<<"): ";
			cin>>val;
			b[k][l]=val;
		}
	}
	cout<<"\n";

	int result[size][si];
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<si; j++)
		{
		result[i][j]=parcial(a,b,i,j,siz);
		}	
	}
	cout<<"El resultado es:"<<"\n";
	printMatrix(result);
}




int main()
{
	int matrixA[size][siz];
	int matrixB[siz][si];
	productMatrix(matrixA, matrixB);
	return 1;
}
