#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T Value)
{
	int index = -1;
	for(int i = 0; i < iSize; i++)
	{
		if(arr[i] == Value)
		{
			index = i+1;
		}
	}
	
	return index;
}

int main()
{
	int iArr[] = {10,20,10,30,20,40,10,40,10};
	int iRet = SearchLast(iArr,9,40);
	cout<<"Last occurence of 10 is : "<<iRet<<"\n";
	
	char cArr[] = {'a','b','c','a','d'};
	iRet = SearchLast(cArr,5,'a');
	cout<<"Last occurence of d is : "<<iRet<<"\n";
	
	return 0;
}