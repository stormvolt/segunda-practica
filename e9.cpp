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
		
string no_repetions(string cadena, int size)
{
	string list;
	for(int i = 0; i < size; i++)
		if(comprobar(list, list.length(), cadena,i)==true)
		{
		    list=list + cadena[i];
		}
	return list;
}
        

void search(string filtro, string a, int n)
{
    for(int i=0; i<filtro.length(); i++)
    {
        cout<<"La letra "<<filtro[i]<<" se encuentra en las siguientes posiciones: ";
        for(int j=0; j<n; j++)
        {
            if(filtro[i]==a[j])
            {
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
}

void descomponer(string a, int n)
{
    string filtro=no_repetions(a, n);
    search(filtro, a, n);
}


int main()
{
  string name;
  int size;
  cout<<"Ingrese su nombre: ";
  cin>>name;
  cout<<"Ingrese el numero de letras de su nombre: ";
  cin>>size;
  descomponer(name, size);
}
