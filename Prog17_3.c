#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int i = 0, iMin = Arr[0], iMax = Arr[0];
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
		
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
	
	return iMax - iMin;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *p = NULL;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter Elements : \n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Difference(p, iSize); 
	
	printf("Difference : %d\n",iRet);
	
	free(p);
	
	return 0;
}
