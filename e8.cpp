#include <iostream>
#include <ctype.h>
using namespace std;

int search_(string a)
{
	string b=" ";
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]==' ')
		{
			return i;
		}
	}
}

void may(string *a)
{
	int val=search_(*a) + 1;
	for(int i=val; i<a->length(); i++)
	{
		a->at(i) = toupper(a->at(i));;
	}
	cout<<*a;
}

int main()
{
    string a="manzana roja";
    string *pa= &a;
    may(pa);
}
