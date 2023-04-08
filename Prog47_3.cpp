#include<stdio.h>

template <class T>
T AddN(T *arr, int iSize)
{
	T Sum;
	
	for(int i = 0; i < iSize; i++)
	{
		Sum = arr[i] + Sum;
	}
	
	return Sum;
}

int main()
{
	int iArr[] = {10,20,30,40,50};
	int iSum = AddN(iArr,5);
	printf("Summation is : %d\n",iSum);
	
	float fArr[] = {10.0,3.7,9.8,8.7};
	float fSum = AddN(fArr,4);
	printf("Summation is : %.2f\n",fSum);
	
	return 0;
}