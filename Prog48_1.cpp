#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int iSize)
{
	for(int i = 0; i < iSize; i++)
	{
		cout<<Value<<" ";
	}
	cout<<"\n";
}

int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);
	
	return 0;
}