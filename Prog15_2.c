#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int i = 0, iEvenCnt = 0, iOddCnt = 0, iAns = 0;
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
	}
	
	iAns = iEvenCnt - iOddCnt;
	
	return iAns;
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
	
	iRet = Frequency(p, iSize); 
	
	printf("Difference : %d\n",iRet);
	
	free(p);
	return 0;
}
