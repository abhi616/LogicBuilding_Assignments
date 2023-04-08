#include<stdio.h>

template <class T>
T AddN(T *arr, int iSize)
{
	T Max = arr[0];
	
	for(int i = 0; i < iSize; i++)
	{
		if(arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	
	return Max;
}

int main()
{
	int iArr[] = {10,20,30,40,50};
	int iMax = AddN(iArr,5);
	printf("Maximum is : %d\n",iMax);
	
	float fArr[] = {10.0,3.7,9.8,8.7};
	float fMax = AddN(fArr,4);
	printf("Maximum is : %f\n",fMax);
	
	return 0;
}