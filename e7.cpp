#include <iostream>
using namespace std;

int main()
{
	int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	if(**matr!=1)
	{
	    cout<<"a es falsa.";
	}
	if(*(*(matr+1)+2)!=7)
	{
	    cout<<"b es falsa.";
	}
	if(*(matr[2]+3)!=12)
	{
	    cout<<"c es falsa.";
	}
	if((*(matr+2))[2]!=11)
	{
	    cout<<"d es falsa.";
	}
	if(*((*matr)+1)!=5)
	{
	    cout<<"e es falsa.";
	}
}
