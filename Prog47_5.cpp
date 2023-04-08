#include<stdio.h>

template <class T>
T AddN(T *arr, int iSize)
{
	T Min = arr[0];
	
	for(int i = 0; i < iSize; i++)
	{
		if(arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	
	return Min;
}

int main()
{
	int iArr[] = {10,20,30,40,50};
	int iMin = AddN(iArr,5);
	printf("Minimum is : %d\n",iMin);
	
	float fArr[] = {10.0,3.7,9.8,8.7};
	float fMin = AddN(fArr,4);
	printf("Minimum is : %.2f\n",fMin);
	
	return 0;
}