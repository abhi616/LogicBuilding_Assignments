#include<stdio.h>

template <class T>
T Max(T No1, T No2, T No3)
{
	T Max;
	
	if(No1 > No2 && No1 > No3)
	{
		Max = No1;
	}
	else if(No2 > No1 && No2 > No3)
	{
		Max = No2;
	}
	else 
	{
		Max = No3;
	}
	
	return Max;
}

int main()
{
	int iRet = Max(20,30,10);
	printf("Maximum is : %d\n",iRet);
	
	float fRet = Max(20.5,20.8,10.4);
	printf("Maximum is : %.2f\n",fRet);
	
	return 0;
}