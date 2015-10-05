#include <iostream>
using namespace std;


int fact(int a)
{
	if(a==0 || a==1)
	{
		return 1;
	}
	else
	{
		int f=1;
		for(int i=2; i<=a; i++)
		{
			f=f*i;
		}
		return f;
	}
}


int main()
{
	int a;	
	cout<<"Ingrese numero: ";
	cin>>a;
	cout<<fact(a);
}
