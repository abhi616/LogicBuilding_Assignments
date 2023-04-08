#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength, int iNo)
{
	int i = 0, iCnt = 0;
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] == iNo)
		{
			iCnt++;
			break;
		}
	}
	
	if(iCnt == 0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	
}

int main()
{
	int iSize = 0, iCnt = 0, iValue = 0;
	BOOL bRet = FALSE;
	int *p = NULL;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iSize);
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
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
	
	bRet = Check(p, iSize, iValue); 
	
	if(bRet == TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
	
	free(p);
	return 0;
}
