#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	 int i = 0, iEvenSum = 0, iOddSum = 0, iAns = 0;
	 
	 for(i = 0; i< iLength; i++)
	 {
		 if(Arr[i] % 2 == 0)
		 {
			 iEvenSum = iEvenSum + Arr[i];
		 }
		 else
		 {
			 iOddSum = iOddSum + Arr[i];
		 }
	 }
	 
	 iAns = iEvenSum - iOddSum;
	 
	 return iAns;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
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
