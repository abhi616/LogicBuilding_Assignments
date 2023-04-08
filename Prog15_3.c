#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Frequency(int Arr[], int iLength)
{
	int i = 0, iCnt = 0;
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i]  == 11)
		{
			iCnt++;
			break;
		}
	}
	
	if(iCnt == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
	BOOL bRet = FALSE;
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
	
	bRet = Frequency(p, iSize); 
	
	if(bRet == TRUE)
	{
	   printf("11 is present\n");
	}
	else
	{
	   printf("11 is absent\n");
	}
	
	free(p);
	return 0;
}
