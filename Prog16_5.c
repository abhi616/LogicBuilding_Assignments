#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
	int i = 0, iOddMult = 1, iCnt = 0;
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] % 2 != 0)
		{
			iCnt++;
			iOddMult = iOddMult * Arr[i];
		}
	}
	
	if(iCnt == 0)
	{
	  iOddMult = 0;
	  return iOddMult;
	}
	else
	{
	  return iOddMult;
	}
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
	
	iRet = Product(p, iSize); 
	
	printf("Product of odd numbers : %d\n",iRet);
	
	free(p);
	return 0;
}
