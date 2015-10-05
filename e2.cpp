#include <iostream>
using namespace std;

bool comprobar(string list, int size, string cadena, int j)
{
	int a=0;
	for(int i=0; i<size; i++)
		{
		    if(cadena[j]==list[i])
		    {
		        a=1;
		    }
		    
		}
	if(a==0)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}
		

void no_repetions(string cadena, int size)
{
	string list;
	for(int i = 0; i < size; i++)
		if(comprobar(list, list.length(), cadena,i)==true)
		{
		    list=list + cadena[i];
		}
	cout<<list;
}

int main()
{
	string cadena;
	cout << "Ingresa la palabra: ";
	getline(cin,cadena); 
	no_repetions(cadena, cadena.length());
	return 0;    
}
