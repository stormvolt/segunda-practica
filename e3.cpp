#include <iostream>
#define size 4000000
using namespace std;

void printl(int x[size])
{
    for(int i=0; i<size; i++)
    {
        cout<<x[i]<<"\n";
    }
}

void ssort(int *ptr)
{
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(*(ptr+i) > *(ptr+j))
			{
				int a= *(ptr+j);
				*(ptr+j)=*(ptr+i);
				*(ptr+i)=a;
			}
		}
	}
}

void llenar(int x[size])
{
	int y=100;
	for(int i=0; i<size; i++)
	{
		if(y<1)
		{
			y=y+100;
		}		
		x[i]=y;
		y--;
	}
}

int main()
{
	int list[size];
	llenar(list);
	int *plist=list;
	ssort(plist);
	printl(list);
	return 1;
}
