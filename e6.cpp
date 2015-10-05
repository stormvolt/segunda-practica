#include <iostream>
using namespace std;

void copy(string a)
{
	string c = a;
	cout<<c;
}

void fusion(string a, string b)
{
	string c = a + b;
	cout<<c;
}


int size(string a)	
{
	return a.length();
}

void comp(string a, string b)
{
	if(a.compare(b)==0)
	{
		cout<<"Son iguales.";
	}
	else
	{
		cout<<"No son iguales.";
	}
}

void menu(string a)
{
	int o;
	cout<<"Opciones"<<"\n";
	cout<<"Copiar el contenido de una cadena a otra...(1)"<<"\n";
	cout<<"Juntar dos cadenas...(2)"<<"\n";
	cout<<"Devolver la longitud de una cadena...(3)"<<"\n";
	cout<<"Comparar si dos cadenas son iguales...(4)"<<"\n";
	cout<<"\n";
	cout<<"Seleccione su opcion: ";
	cin>>o;
	if(o==1)
	{
		copy(a);
	}
	else if(o==2)
	{
		string b;	
		cout<<"Ingrese otra cadena de texto: ";
		cin>>b;
		fusion(a,b);
	}
	else if(o==3)
	{
		cout<<size(a);
	}
	else if(o==4)
	{
		string b;	
		cout<<"Ingrese una cadena de texto: ";
		cin>>b;
		comp(a,b);
	}
}

int main()
{
	string a;	
	cout<<"Ingrese una cadena de texto: ";
	cin>>a;
	menu(a);
}
