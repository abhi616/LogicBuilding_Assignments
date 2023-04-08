#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T Value)
{
	int index = -1;
	for(int i = 0; i < iSize; i++)
	{
		if(arr[i] == Value)
		{
			index = i+1;
			break;
		}
	}
	
	return index;
}

int main()
{
	int iArr[] = {10,20,10,30,20,40,10,40,10};
	int iRet = SearchFirst(iArr,9,40);
	cout<<"First occurence of 10 is : "<<iRet<<"\n";
	
	char cArr[] = {'a','b','c','a','d'};
	iRet = SearchFirst(cArr,5,'d');
	cout<<"First occurence of d is : "<<iRet<<"\n";
	
	return 0;
}