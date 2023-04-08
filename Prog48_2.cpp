#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T Value)
{
	int Freq = 0;
	for(int i = 0; i < iSize; i++)
	{
		if(arr[i] == Value)
		{
			Freq++;
		}
	}
	
	return Freq;
}

int main()
{
	int iArr[] = {10,20,10,30,40,30,10,40,10};
	int iRet = Frequency(iArr,9,10);
	cout<<"Frequency of 10 is : "<<iRet<<"\n";
	
	char cArr[] = {'a','b','c','a','d'};
	iRet = Frequency(cArr,5,'a');
	cout<<"Frequency of a is : "<<iRet<<"\n";
	
	return 0;
}